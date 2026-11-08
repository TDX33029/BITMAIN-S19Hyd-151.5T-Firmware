// FUN_011965c0 @ 011965c0 size=376 calls_out=7 calls_in=1
// strings: 

void FUN_011965c0(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  double dVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_s1;
  double dVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),&DAT_0056a350
                       ,8);
  if (*param_4 == '\x02') {
    iVar4 = *(int *)(param_4 + 8);
    iVar3 = *(int *)(param_4 + 0xc);
    if (iVar4 == 0 && iVar3 == 0) {
      uVar7 = *(undefined4 *)(param_4 + 0x10);
      uVar6 = *(undefined4 *)(param_4 + 0x14);
      puVar2 = (undefined8 *)thunk_FUN_016d4a50(0x10);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x10);
      }
      puVar5 = &DAT_01889cc8;
      *puVar2 = uVar9;
      *(undefined4 *)(puVar2 + 1) = uVar7;
      *(undefined4 *)((int)puVar2 + 0xc) = uVar6;
      goto LAB_0119670c;
    }
    if (*(char *)(param_2 + 0x88) != '\0') {
      dVar1 = *(double *)(param_4 + 0x10);
      dVar8 = (double)FUN_01845d5c(*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14));
      if (iVar4 == 2 && iVar3 == 0) {
        dVar8 = dVar1;
      }
      uVar7 = FUN_016d62a0(SUB84(dVar8,0));
      if ((double)CONCAT44(extraout_s1,uVar7) == dVar8) {
        puVar2 = (undefined8 *)thunk_FUN_016d4a50(0x10);
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x10);
        }
        puVar5 = &DAT_01889cc8;
        *puVar2 = uVar9;
        uVar9 = FUN_01845b18(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
        if (dVar8 < 0.0) {
          uVar9 = 0;
        }
        if (1.844674407370955e+19 < dVar8) {
          uVar9 = 0xffffffffffffffff;
        }
        puVar2[1] = uVar9;
        goto LAB_0119670c;
      }
    }
  }
  puVar5 = (undefined *)FUN_01246ac0(param_4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  puVar2 = (undefined8 *)0x0;
LAB_0119670c:
  param_1[2] = puVar5;
  *param_1 = 1;
  param_1[1] = puVar2;
  return;
}

