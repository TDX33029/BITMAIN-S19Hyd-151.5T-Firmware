// FUN_0157e58c @ 0157e58c size=400 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_0157e58c(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  int local_50;
  int local_4c;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 auStack_30 [12];
  
  uVar5 = 0;
  if (*param_2 == '\x03') {
    local_50 = *(int *)(param_2 + 8);
    local_4c = local_50 + *(int *)(param_2 + 0xc);
    iVar3 = FUN_01501600(&local_50);
    if (iVar3 != 0) {
      piVar6 = *(int **)(param_1 + 0xc);
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_0157e718:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x157e718);
        (*pcVar1)();
      }
      uVar4 = *(uint *)(param_1 + 0x10);
      if (param_4 == 0) {
        local_50 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar7 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0157e718;
        uVar5 = *(undefined4 *)(param_4 + 0x10);
        piVar8 = piVar6 + 2;
        uVar9 = (*(int **)(param_4 + 4))[1];
        if (uVar4 < uVar9) {
          uVar9 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar8,uVar9);
          if (iVar3 != 0) {
            uVar9 = 0;
          }
          piVar8 = (int *)((int)piVar8 + uVar9);
        }
        local_38 = FUN_016bc0ec(piVar8,uVar4 - uVar9);
        local_44 = 3;
        local_50 = 2;
        local_40 = piVar7;
        local_3c = uVar5;
      }
      uVar10 = FUN_01531840(param_3);
      FUN_006666fc(auStack_30,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      uVar5 = FUN_01596298(piVar6,uVar4,&local_50,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),
                           param_2,auStack_30);
    }
  }
  return uVar5;
}

