// FUN_0155c420 @ 0155c420 size=192 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_0155c420(short *param_1,short *param_2,int param_3)

{
  code *pcVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  puVar4 = (undefined4 *)0x0;
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    uVar3 = *(undefined4 *)param_1;
    if (*param_1 == 0xd) {
      param_2 = param_2 + 1;
      do {
        sVar2 = param_2[-1];
        bVar7 = sVar2 == 0xd;
        if (bVar7) {
          sVar2 = *param_2;
        }
        if (bVar7 && sVar2 == param_1[1]) goto LAB_0155c48c;
        param_2 = param_2 + 2;
        param_3 = param_3 + -4;
      } while (param_3 != 0);
    }
    else {
      do {
        if (*param_2 == *param_1) goto LAB_0155c48c;
        param_2 = param_2 + 2;
        param_3 = param_3 + -4;
      } while (param_3 != 0);
    }
  }
LAB_0155c4c4:
  return CONCAT44(&UNK_018a8bd8,puVar4);
LAB_0155c48c:
  piVar6 = *(int **)(param_1 + 2);
  do {
    iVar5 = *piVar6;
    bVar7 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar7);
  *piVar6 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x155c4dc);
    (*pcVar1)();
  }
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar4 = uVar3;
  puVar4[1] = piVar6;
  goto LAB_0155c4c4;
}

