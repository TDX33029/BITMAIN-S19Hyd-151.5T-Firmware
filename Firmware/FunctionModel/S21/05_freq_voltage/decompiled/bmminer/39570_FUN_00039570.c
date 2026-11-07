// FUN_00039570 @ 00039570  size=496  callers=0
// program: bmminer


void FUN_00039570(int param_1)

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
  int iVar11;
  uint local_2030;
  char acStack_2028 [8196];
  
  uVar1 = FUN_0002a544();
  uVar2 = FUN_0002a574();
  iVar3 = FUN_00098658(uVar1,uVar2);
  iVar4 = FUN_0002a574();
  if (3 < DAT_000be63c) {
    snprintf(acStack_2028,0x2000,"enable col num is %d ",(param_1 * iVar3) / 100);
    FUN_0004948c(3,acStack_2028,0);
  }
  local_2030 = 0;
  FUN_00083178(0,1);
  do {
    iVar5 = FUN_0002a6f0(local_2030);
    if (iVar5 != 0) {
      uVar9 = local_2030 & 0xff;
      iVar5 = 0;
      FUN_00082420(uVar9);
      FUN_00082dac(uVar9,0);
      do {
        if (0 < iVar4) {
          iVar11 = 0;
          iVar10 = iVar5;
          do {
            iVar8 = 0;
            iVar6 = FUN_0002aee8();
            if (0 < iVar6) {
              do {
                iVar6 = 0;
                while( true ) {
                  iVar7 = FUN_0002aefc();
                  if (iVar7 <= iVar6) break;
                  iVar7 = FUN_0002af10(iVar8,iVar6);
                  FUN_00082a50(uVar9,iVar7 + -1,iVar10);
                  iVar6 = iVar6 + 1;
                }
                iVar8 = iVar8 + 1;
                iVar6 = FUN_0002aee8();
              } while (iVar8 < iVar6);
            }
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + iVar3;
          } while (iVar4 != iVar11);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x10);
    }
    local_2030 = local_2030 + 1;
  } while (local_2030 != 4);
  DAT_000be5f8 = param_1;
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
    snprintf(acStack_2028,0x2000,"Hashrate ajusted at %d percent is done",param_1);
    FUN_0004948c(5,acStack_2028,0);
  }
  return;
}

