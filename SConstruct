
import os.path

env = Environment()

#env.Append(CXXFLAGS = '-std=c++11')

#sourceToBuild = [x for x in Glob('*.cpp') if str(x) not in excluded_files]
sourceToBuild = [x for x in Glob('Demo/*.cpp')]
env.Append(CPPFLAGS=['-Wall', '-ansi', '-pedantic', '-O2', '-lX11', '-std=c++11']) 

env.Append(LIBPATH=['/opt/local/lib','/opt/local/lib/mariadb/mysql', '/usr/lib', '/usr/local/lib'])
import atexit
import sys



env.Append(LIBS=['-lmysqlclient', 
				 '-lboost_timer-mt',
				 '-lpthread',  				 
				 '-lboost_system-mt',
				 '-lboost_unit_test_framework-mt',			
				 '-lGLEW' ,				
				 '-lglfw',
				 '-lpqxx', 
				 '-lglib-2.0',
				 '-lftgl' 				
				]
				)

env.Append(FRAMEWORKS = ['OpenGL', 'GLUT'])

env.Append(CPPPATH = [
						'/opt/local/include/'	,
						'usr/include/boost/system',
            	 		'/usr/include/boost',
                 		'/usr/include/boost/test', 
        		 		'/usr/include/boost/timer',
        		 		'/opt/local/include/mariadb/mysql',
        		 		'/opt/local/include/freetype2/',
        		 		'./rapidxml',
        		 		'./lru_cache'
        		 		])

env.Append(CPPDEFINES=['SETTINGS_DEVELOPMENT', 'USER_UMA'])





# Remember that the SCons Glob() function is not recursive You may also use [!abc] to omit some classes based on build

env.Program(target = 'Project',   source= sourceToBuild   )



env.Program(target='test',   source= [sourceToBuild]   )

#testEnv = Environment()
sourceToTest = ['testHouse.cpp', 'Bed.hpp']
#testEnv.Append(CPPPATH=['/opt/local/lib', '/opt/local/include/' ])

#testEnv.Append(FRAMEWORKS = ['-lboost_unit_test_framework-mt'])
env.Program(target='test',   source = sourceToTest   )
#env.Command(target= 'testOutput',    source = './test',       action = ['./Project'])
