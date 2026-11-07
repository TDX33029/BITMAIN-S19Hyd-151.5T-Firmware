// FUN_019dc904 @ 019dc904 size=280 calls_out=7 calls_in=70
// strings: 

void FUN_019dc904(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int *unaff_r7;
  bool bVar8;
  undefined8 uVar9;
  
  uVar9 = thunk_FUN_01bee35a(param_1,0x20);
  iVar6 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    if (*(char *)(iVar6 + 0x38) == '\x02') goto LAB_019dc95c;
    FUN_019a2bcc(iVar6,&LAB_019efb68);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  bVar8 = *(char *)(iVar6 + 0x32) != '\x02';
  if (bVar8) {
    unaff_r7 = *(int **)(iVar6 + 0x20);
  }
  if (bVar8 && unaff_r7 != (int *)0x0) {
    iVar6 = *unaff_r7;
    bVar8 = iVar6 == 0;
    if (bVar8) {
      iVar6 = unaff_r7[1];
    }
    if (bVar8 && param_1 == iVar6) {
      if (unaff_r7[2] != 0) {
        FUN_01306fc8(&DAT_01d29544);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x19dca18);
        (*pcVar1)();
      }
      puVar7 = (uint *)unaff_r7[3];
      unaff_r7[2] = -1;
      if (puVar7 == (uint *)0x0) {
        unaff_r7[2] = 0;
        FUN_019d8858(param_2);
        return;
      }
      uVar3 = *puVar7;
      uVar2 = puVar7[3];
      if (uVar2 == uVar3) {
        FUN_019efb94(puVar7);
        uVar3 = *puVar7;
        uVar2 = puVar7[3];
      }
      uVar5 = puVar7[2] + uVar2;
      puVar7[3] = uVar2 + 1;
      uVar4 = uVar5 - uVar3;
      if (uVar5 < uVar3) {
        uVar4 = uVar5;
      }
      *(undefined4 *)(puVar7[1] + uVar4 * 4) = param_2;
      *(uint *)(param_1 + 0xa8) = uVar2 + 1;
      unaff_r7[2] = unaff_r7[2] + 1;
      return;
    }
  }
LAB_019dc95c:
  FUN_019ed870(param_1 + 0x128,param_2);
  FUN_019e2824(param_1 + 0x180);
  return;
}

