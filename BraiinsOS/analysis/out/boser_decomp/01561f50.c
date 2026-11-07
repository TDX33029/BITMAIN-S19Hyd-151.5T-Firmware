// FUN_01561f50 @ 01561f50 size=332 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01561f50(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  uint local_54 [3];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  if ((*param_2 == '\x05') && (iVar5 = *(int *)(param_1 + 8), iVar5 != 0)) {
    piVar8 = *(int **)(param_1 + 4);
    iVar1 = *(int *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    uVar2 = (uint)(iVar1 != 0);
    piVar9 = piVar8;
    do {
      piVar7 = piVar9 + 6;
      local_40 = 0;
      local_54[1] = 0;
      local_54[0] = uVar2;
      local_54[2] = iVar1;
      uStack_48 = uVar6;
      uStack_44 = uVar2;
      local_3c = iVar1;
      local_38 = uVar6;
      local_34 = uVar4;
      while( true ) {
        uVar10 = FUN_01a41998(local_54);
        iVar3 = (int)uVar10;
        if (iVar3 == 0) break;
        FUN_01552754(&local_30,*(undefined4 *)(*piVar9 + 8),*(undefined4 *)(*piVar9 + 0xc),
                     *(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        if (local_30 != -0x80000000) {
          if (local_30 == -0x7fffffff) {
            if (((char)local_2c != '\0') &&
               (iVar3 = FUN_01577618(piVar9 + 1,(int)((ulonglong)uVar10 >> 0x20),param_3),
               iVar3 == 0)) {
              return 0;
            }
          }
          else {
            FUN_019bb7e0(local_30,local_2c);
          }
        }
      }
      piVar9 = piVar7;
    } while (piVar7 != piVar8 + iVar5 * 6);
  }
  return 1;
}

