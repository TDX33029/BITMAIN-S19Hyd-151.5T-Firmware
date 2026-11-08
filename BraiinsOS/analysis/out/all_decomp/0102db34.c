// FUN_0102db34 @ 0102db34 size=408 calls_out=3 calls_in=1
// strings: 

void FUN_0102db34(int param_1,int *param_2,int param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  int iStack_30;
  int *local_2c;
  code *local_28;
  
  iVar5 = *param_2;
  uVar4 = param_2[1];
  iVar6 = param_2[2];
  piVar7 = &iStack_30;
  if (((uVar4 < *(uint *)(iVar5 + 0x38)) &&
      (piVar1 = (int *)(*(int *)(iVar5 + 0x34) + uVar4 * 0xf8), *piVar1 != 3 || piVar1[1] != 0)) &&
     (piVar1[0x35] == iVar6)) {
    if (*(byte *)(piVar1 + 8) < 6) {
      return;
    }
    piVar1[9] = param_3;
    *(undefined1 *)(piVar1 + 8) = 5;
    uVar3 = *(uint *)(iVar5 + 0x38);
    if (((uVar4 < uVar3) &&
        (piVar1 = (int *)(*(int *)(iVar5 + 0x34) + uVar4 * 0xf8), *piVar1 != 3 || piVar1[1] != 0))
       && (piVar1[0x35] == iVar6)) {
      if ((uint)piVar1[0x38] < (uint)piVar1[0x37]) {
        iVar2 = piVar1[0x37] - piVar1[0x38];
        if (!SBORROW4(piVar1[0xf],iVar2)) {
          piVar1[0xf] = piVar1[0xf] - iVar2;
        }
        iStack_30 = iVar6;
        FUN_0101cdd0(param_1 + 8,iVar2,param_2,param_4,piVar7,uVar4);
        uVar3 = *(uint *)(iVar5 + 0x38);
      }
      if (((uVar4 < uVar3) &&
          (piVar1 = (int *)(*(int *)(iVar5 + 0x34) + uVar4 * 0xf8), *piVar1 != 3 || piVar1[1] != 0))
         && (piVar1[0x35] == iVar6)) {
        bVar8 = (char)piVar1[0x3b] == '\0';
        if (bVar8) {
          piVar1 = (int *)(uint)*(byte *)((int)piVar1 + 0xed);
        }
        if (!bVar8 || piVar1 != (int *)0x0) {
          return;
        }
        iStack_30 = iVar6;
        FUN_014298a0(param_1 + 8,param_2);
        iVar5 = *param_5;
        *param_5 = 0;
        if (iVar5 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0102dca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar5 + 4))(param_5[1]);
        return;
      }
    }
  }
  local_28 = FUN_0101a4ac;
  iStack_30 = iVar6;
  local_2c = piVar7;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_2c,&DAT_01882550);
}

