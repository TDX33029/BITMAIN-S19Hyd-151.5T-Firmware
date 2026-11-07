// FUN_01521010 @ 01521010 size=360 calls_out=8 calls_in=1
// strings: 

void FUN_01521010(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  double *pdVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  undefined8 uVar7;
  double dVar8;
  
  uVar7 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),&DAT_00570b78
                       ,8);
  if (*param_4 == '\x02') {
    if (*(int *)(param_4 + 8) == 0 && *(int *)(param_4 + 0xc) == 0) {
      uVar5 = *(undefined4 *)(param_4 + 0x10);
      uVar6 = *(undefined4 *)(param_4 + 0x14);
      puVar4 = (undefined8 *)thunk_FUN_01be5118(0x10);
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x10);
      }
      *puVar4 = uVar7;
      *(undefined4 *)(puVar4 + 1) = uVar5;
      puVar2 = &DAT_01cfb5b0;
      *(undefined4 *)((int)puVar4 + 0xc) = uVar6;
      goto LAB_015210fc;
    }
    if (*(char *)(param_2 + 0x88) != '\0') {
      pdVar1 = (double *)(param_4 + 0x10);
      iVar3 = *(int *)(param_4 + 8);
      if (iVar3 == 0) {
        dVar8 = (double)FUN_01bf0e80(*(undefined4 *)pdVar1,*(undefined4 *)(param_4 + 0x14));
      }
      else if (iVar3 == 1) {
        dVar8 = (double)FUN_01bf0cac(*(undefined4 *)pdVar1,*(undefined4 *)(param_4 + 0x14));
      }
      else {
        dVar8 = *pdVar1;
      }
      uVar6 = FUN_01be6548(SUB84(dVar8,0));
      if ((double)CONCAT44(extraout_s1,uVar6) == dVar8) {
        puVar4 = (undefined8 *)thunk_FUN_01be5118(0x10);
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x10);
        }
        puVar2 = &DAT_01cfb5b0;
        *puVar4 = uVar7;
        uVar7 = FUN_01bf0b64(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
        if (dVar8 < 0.0) {
          uVar7 = 0;
        }
        if (1.844674407370955e+19 < dVar8) {
          uVar7 = 0xffffffffffffffff;
        }
        puVar4[1] = uVar7;
        goto LAB_015210fc;
      }
    }
  }
  puVar2 = (undefined *)FUN_01562d48(param_4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  puVar4 = (undefined8 *)0x0;
LAB_015210fc:
  *param_1 = 1;
  param_1[1] = puVar4;
  param_1[2] = puVar2;
  return;
}

