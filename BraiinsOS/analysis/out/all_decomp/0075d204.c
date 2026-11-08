// FUN_0075d204 @ 0075d204 size=340 calls_out=3 calls_in=2
// strings: 

void FUN_0075d204(undefined1 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_3c [6];
  
  piVar5 = (int *)(param_2 + 0x10);
  iVar10 = *piVar5;
  *piVar5 = 0;
  if (iVar10 != 0) {
    uVar6 = *(uint *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x14);
    local_3c[0] = *(undefined4 *)(param_2 + 0x1c);
    if (uVar6 != 0) {
      uVar3 = param_4[1];
      uVar2 = param_4[2];
      uVar9 = uVar3 - uVar2;
      uVar8 = uVar6;
      if (uVar9 < uVar6) {
        uVar8 = uVar9;
      }
      uVar7 = uVar8 + uVar2;
      if ((uVar7 < uVar2) || (uVar3 < uVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar7,uVar3,&DAT_01884c40);
      }
      FUN_016dd1aa(*param_4 + uVar2,iVar1,uVar8);
      param_4[2] = uVar7;
      if ((uint)param_4[3] < uVar7) {
        param_4[3] = uVar7;
      }
      if (uVar9 < uVar6) {
        *piVar5 = iVar10;
        *(uint *)(param_2 + 0x14) = iVar1 + uVar8;
        *(uint *)(param_2 + 0x18) = uVar6 - uVar8;
        *(undefined4 *)(param_2 + 0x1c) = local_3c[0];
        *param_1 = 4;
        return;
      }
      pcVar4 = *(code **)(iVar10 + 0x10);
      *param_1 = 4;
      (*pcVar4)(local_3c);
      return;
    }
    (**(code **)(iVar10 + 0x10))(local_3c,iVar1,0);
  }
  FUN_0076ea7c(param_1,param_2,param_3,param_4);
  return;
}

