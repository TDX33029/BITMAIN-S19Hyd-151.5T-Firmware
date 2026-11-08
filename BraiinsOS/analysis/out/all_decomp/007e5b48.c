// FUN_007e5b48 @ 007e5b48 size=592 calls_out=12 calls_in=2
// strings: 

void FUN_007e5b48(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint local_4c;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  uint local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  uVar7 = *param_2;
  iVar8 = param_2[1];
  if (iVar8 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = thunk_FUN_016d4a50(iVar8);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar8);
    }
  }
  FUN_016dd1aa(uVar1,uVar7,iVar8);
  local_40 = 0;
  local_34 = 0;
  local_3c = 0x1b6;
  local_38 = 0x101;
  FUN_015ec1bc(&local_28,&local_40,uVar7,iVar8);
  uVar6 = (uint)local_28 & 0xff;
  if (uVar6 == 4) {
    uVar5 = 0;
    iVar2 = FUN_016d6590(local_24,0x703,0);
    if ((iVar2 != -1) && (iVar2 = FUN_016d6590(local_24,0x708,0), iVar2 != -1)) {
      if (iVar8 != -0x80000000) {
        local_4c = local_4c & 0xffffff00;
        iVar2 = param_2[2];
        piVar3 = (int *)thunk_FUN_016d4a50(0x1c);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x1c);
        }
        *piVar3 = iVar8;
        piVar3[1] = uVar1;
        piVar3[2] = iVar8;
        piVar3[3] = (int)local_24;
        piVar3[4] = 0;
        piVar3[5] = local_4c;
        piVar3[6] = iVar2;
        FUN_010f6fd8(&local_40,piVar3,&DAT_0185ebf8);
        uVar7 = local_3c;
        iVar8 = local_40;
        if (local_40 == 0) {
          *param_1 = 0;
          param_1[1] = local_3c;
          return;
        }
        puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *puVar4 = 1;
        puVar4[1] = 1;
        puVar4[2] = iVar8;
        puVar4[3] = uVar7;
        *param_1 = puVar4;
        param_1[1] = &DAT_0185ec18;
        return;
      }
      uVar5 = uVar1 >> 8;
      puVar4 = (undefined4 *)0x80000000;
      uVar6 = uVar1;
      goto LAB_007e5d20;
    }
    puVar4 = (undefined4 *)FUN_0126ebd4();
    FUN_016dffb2(local_24);
    uVar6 = 4;
  }
  else {
    uVar5 = (uint)local_28 >> 8;
    puVar4 = local_24;
  }
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(uVar1);
  }
LAB_007e5d20:
  uVar1 = 0;
  if ((uVar6 & 0xff) != 4) {
    uVar1 = uVar6;
  }
  local_30 = uVar1 & 0xff | uVar5 << 8;
  local_24 = &DAT_0157d360;
  local_2c = (int)puVar4;
  local_28 = param_2;
  FUN_00600d2c(&local_40,&DAT_00586bd8,&local_28);
  uVar7 = FUN_007f4afc(&local_30,&local_40);
  *param_1 = 0;
  param_1[1] = uVar7;
  return;
}

