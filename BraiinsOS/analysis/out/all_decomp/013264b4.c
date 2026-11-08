// FUN_013264b4 @ 013264b4 size=412 calls_out=4 calls_in=2
// strings: 

void FUN_013264b4(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_58;
  uint local_54;
  uint local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  
  iVar7 = *param_2;
  uVar1 = param_2[1] - iVar7;
  if (uVar1 == 0) {
    uVar1 = 0;
    local_54 = 4;
    local_58 = 0;
  }
  else {
    local_58 = uVar1 / 0xa0;
    local_54 = thunk_FUN_016d4a50(local_58 << 4,uVar1 * -0x33333333);
    if (local_54 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,local_58 << 4);
    }
    piVar5 = (int *)param_2[2];
    uVar1 = 0;
    do {
      uVar6 = 0;
      iVar4 = *piVar5;
      uVar9 = *(uint *)(iVar4 + 8);
      if ((0x3fffffff < uVar9) || (piVar3 = (int *)(uVar9 * 4), (int *)0x7ffffffc < piVar3)) {
LAB_01326610:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar6,param_2);
      }
      uVar6 = *(undefined4 *)(iVar4 + 4);
      uVar2 = *(uint *)(iVar4 + 0xc);
      if (piVar3 == (int *)0x0) {
        param_2 = (int *)&DAT_00000004;
        uVar10 = 0;
      }
      else {
        param_2 = (int *)thunk_FUN_016d4a50(piVar3);
        if (param_2 == (int *)0x0) {
          uVar6 = 4;
          param_2 = piVar3;
          goto LAB_01326610;
        }
        uVar10 = uVar9;
      }
      local_38 = uVar10;
      local_34 = param_2;
      FUN_016dd1aa(param_2,uVar6,piVar3);
      piVar3 = param_2;
      local_30 = uVar9;
      local_2c = uVar2;
      if (uVar9 == uVar10) {
        FUN_0132f568(&local_38);
        piVar3 = local_34;
      }
      piVar3[uVar9] = iVar7;
      iVar7 = iVar7 + 0xa0;
      puVar8 = (uint *)(local_54 + uVar1 * 0x10);
      *puVar8 = local_38;
      uVar1 = uVar1 + 1;
      puVar8[1] = (uint)local_34;
      puVar8[2] = uVar9 + 1;
      puVar8[3] = local_2c;
    } while (local_58 != uVar1);
  }
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = uVar1;
  return;
}

