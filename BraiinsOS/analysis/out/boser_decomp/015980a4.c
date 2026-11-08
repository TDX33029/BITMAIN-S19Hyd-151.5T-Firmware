// FUN_015980a4 @ 015980a4 size=356 calls_out=6 calls_in=2
// strings: idn-hostname

undefined4 FUN_015980a4(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 local_44 [3];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  uVar4 = 0;
  if ((*param_2 == '\x03') &&
     (iVar3 = FUN_01598294(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)), iVar3 == 0)
     ) {
    piVar5 = (int *)*param_1;
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_01598204:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1598204);
      (*pcVar1)();
    }
    uVar8 = param_1[1];
    if (param_4 == 0) {
      local_44[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar6 = *(int **)(param_4 + 0xc);
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01598204;
      piVar9 = piVar5 + 2;
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = (*(int **)(param_4 + 4))[1];
      if (uVar8 < uVar7) {
        uVar7 = 0;
      }
      else {
        iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar9,uVar7);
        if (iVar3 != 0) {
          uVar7 = 0;
        }
        piVar9 = (int *)((int)piVar9 + uVar7);
      }
      local_2c = FUN_016bc0ec(piVar9,uVar8 - uVar7);
      local_38 = 3;
      local_44[0] = 2;
      local_34 = piVar6;
      local_30 = uVar4;
    }
    uVar10 = FUN_01531840(param_3);
    uVar4 = FUN_01595ecc(piVar5,uVar8,local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_2,
                         "idn-hostname",0xc);
  }
  return uVar4;
}

