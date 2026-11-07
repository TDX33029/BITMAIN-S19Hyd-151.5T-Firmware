// FUN_0153273c @ 0153273c size=400 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_0153273c(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  if (*param_2 == '\x04') {
    iVar11 = *(int *)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 0xc) * 0x18;
    do {
      if (iVar8 == 0) {
        piVar5 = *(int **)(param_1 + 4);
        do {
          iVar8 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar8 + 1;
        if (iVar8 < 0) {
LAB_015328c8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x15328c8);
          (*pcVar1)();
        }
        uVar9 = *(undefined4 *)(param_1 + 8);
        if (param_4 == 0) {
          local_44[0] = 0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar7 = *(int **)(param_4 + 0xc);
          do {
            iVar8 = *piVar7;
            bVar2 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar2);
          *piVar7 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_015328c8;
          uVar4 = 0;
          uVar12 = *(undefined4 *)(param_4 + 0x10);
          uVar6 = *(uint *)(param_1 + 8);
          iVar8 = *(int *)(param_1 + 4) + 8;
          uVar10 = (*(int **)(param_4 + 4))[1];
          if (uVar10 <= uVar6) {
            iVar11 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar8,uVar10);
            uVar4 = uVar10;
            if (iVar11 != 0) {
              uVar4 = 0;
            }
          }
          local_2c = FUN_016bc0ec(iVar8 + uVar4,uVar6 - uVar4);
          local_38 = 3;
          local_44[0] = 2;
          local_34 = piVar7;
          local_30 = uVar12;
        }
        uVar13 = FUN_01531840(param_3);
        uVar9 = FUN_01596344(piVar5,uVar9,local_44,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),
                             param_2);
        return uVar9;
      }
      iVar3 = FUN_01577618(param_1,iVar11,param_5);
      iVar8 = iVar8 + -0x18;
      iVar11 = iVar11 + 0x18;
    } while (iVar3 == 0);
  }
  return 0;
}

