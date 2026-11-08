// FUN_015340dc @ 015340dc size=460 calls_out=7 calls_in=2
// strings: minContains

undefined4 FUN_015340dc(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *unaff_r5;
  undefined4 unaff_r9;
  undefined8 uVar10;
  int local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar3 = 0;
  if (*param_2 == '\x04') {
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_015752f0(local_44,param_1[4]);
                    /* WARNING: Could not recover jumptable at 0x0153416c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&DAT_01534170 + *(int *)(&DAT_01534170 + local_44[0] * 4)))();
      return uVar3;
    }
    uVar3 = 0;
    if ((uint)(*param_1 == 0) <= (uint)-param_1[1]) {
      local_2c = FUN_015345a4(param_1[5],param_1[6],"minContains",0xb);
      uVar7 = (uint)((ulonglong)local_2c >> 0x20);
      iVar4 = (int)local_2c;
      if (param_4 == 0) {
        local_44[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        unaff_r5 = *(int **)(param_4 + 0xc);
        do {
          iVar5 = *unaff_r5;
          bVar2 = (bool)hasExclusiveAccess(unaff_r5);
        } while (!bVar2);
        *unaff_r5 = iVar5 + 1;
        if (iVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1534478);
          (*pcVar1)();
        }
        uVar8 = 0;
        unaff_r9 = *(undefined4 *)(param_4 + 0x10);
        iVar5 = iVar4 + 8;
        uVar9 = (*(int **)(param_4 + 4))[1];
        if (uVar9 <= uVar7) {
          iVar6 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar5,uVar9);
          uVar8 = uVar9;
          if (iVar6 != 0) {
            uVar8 = 0;
          }
        }
        local_2c = FUN_016bc0ec(iVar5 + uVar8,uVar7 - uVar8);
        local_44[0] = 2;
      }
      local_38 = 3;
      local_34 = unaff_r5;
      local_30 = unaff_r9;
      uVar10 = FUN_01531840(param_3);
      uVar3 = FUN_01596344(iVar4,uVar7,local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2
                          );
    }
  }
  return uVar3;
}

