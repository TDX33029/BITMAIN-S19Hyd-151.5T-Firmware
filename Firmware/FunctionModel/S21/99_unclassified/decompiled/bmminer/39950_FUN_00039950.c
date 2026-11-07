// FUN_00039950 @ 00039950  size=436  callers=2
// program: bmminer


void FUN_00039950(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_2038;
  int local_2034;
  char acStack_2028 [8196];
  
  uVar1 = FUN_0002a544();
  uVar2 = FUN_0002a574();
  iVar3 = FUN_00098658(uVar1,uVar2);
  iVar4 = FUN_0002a574();
  if (3 < DAT_000be63c) {
    snprintf(acStack_2028,0x2000,"is enable %d from %d to %d",param_3,param_1,param_2);
    FUN_0004948c(3,acStack_2028,0);
  }
  local_2038 = 0;
  do {
    iVar5 = FUN_0002a6f0(local_2038);
    if (iVar5 != 0) {
      uVar9 = local_2038 & 0xff;
      FUN_00083178(uVar9,1,0);
      FUN_00082420(uVar9,0);
      FUN_00082dac(uVar9,0);
      if (param_1 < param_2) {
        local_2034 = param_1;
        do {
          if (0 < iVar4) {
            iVar10 = 0;
            iVar5 = local_2034;
            do {
              iVar6 = FUN_0002aee8();
              iVar8 = 0;
              if (0 < iVar6) {
                do {
                  for (iVar6 = 0; iVar7 = FUN_0002aefc(), iVar6 < iVar7; iVar6 = iVar6 + 1) {
                    iVar7 = FUN_0002af10();
                    if (param_3 == 0) {
                      FUN_000829a0();
                    }
                    else {
                      FUN_00082a50(uVar9,iVar7 + -1,iVar5);
                    }
                    usleep(500);
                  }
                  iVar7 = iVar8 + 1;
                  iVar6 = FUN_0002aee8(iVar8,iVar6);
                  iVar8 = iVar7;
                } while (iVar7 < iVar6);
              }
              iVar10 = iVar10 + 1;
              iVar5 = iVar5 + iVar3;
            } while (iVar4 != iVar10);
          }
          local_2034 = local_2034 + 1;
        } while (param_2 != local_2034);
      }
    }
    local_2038 = local_2038 + 1;
  } while (local_2038 != 4);
  return;
}

