::Script

@echo off & setlocal


del ..\4diacIDE-workspace\test_B\Uebungen\const\UT\Workspace\DefaultPool.gcf
python GcfScript.py --oldfile ISO-DesignerProjects\Workspace_front_fertilizer\DefaultPool\Output\DefaultPool.iop.h --newfolder 4diacIDE-workspace\test_B\Uebungen\const\UT\Workspace\ --newfile DefaultPool
