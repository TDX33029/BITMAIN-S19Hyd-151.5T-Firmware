// FUN_00eabeac @ 00eabeac size=332 calls_out=3 calls_in=2
// strings: 

void FUN_00eabeac(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 auStack_3c [6];
  
  piVar6 = (int *)(param_2 + 0x10);
  iVar9 = *piVar6;
  *piVar6 = 0;
  if (iVar9 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    uVar7 = *(undefined4 *)(param_2 + 0x1c);
    puVar1 = (undefined4 *)((uint)&local_48 | 4);
    *puVar1 = *(undefined4 *)(param_2 + 0x14);
    puVar1[1] = uVar4;
    puVar1[2] = uVar7;
    local_48 = iVar9;
    if (local_40 != 0) {
      uVar3 = param_4[1];
      uVar2 = param_4[2];
      uVar8 = uVar3 - uVar2;
      uVar10 = local_40;
      if (uVar8 < local_40) {
        uVar10 = uVar8;
      }
      uVar11 = uVar10 + uVar2;
      if ((CARRY4(uVar10,uVar2)) || (uVar3 < uVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar2,uVar11,uVar3,&DAT_01cf4ae4);
      }
      FUN_01bed4e2(*param_4 + uVar2,local_44,uVar10);
      local_44 = local_44 + uVar10;
      param_4[2] = uVar11;
      if ((uint)param_4[3] < uVar11) {
        param_4[3] = uVar11;
      }
      if (uVar8 < local_40) {
        *piVar6 = local_48;
        *(int *)(param_2 + 0x14) = local_44;
        *(uint *)(param_2 + 0x18) = local_40 - uVar10;
        *(undefined4 *)(param_2 + 0x1c) = auStack_3c[0];
        *param_1 = 4;
        return;
      }
      pcVar5 = *(code **)(iVar9 + 0x10);
      *param_1 = 4;
      local_40 = local_40 - uVar10;
      (*pcVar5)(auStack_3c);
      return;
    }
    (**(code **)(iVar9 + 0x10))(auStack_3c,local_44,0);
  }
  FUN_01a6bd8c(param_1,param_2,param_3,param_4);
  return;
}

