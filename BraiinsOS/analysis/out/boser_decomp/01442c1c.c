// FUN_01442c1c @ 01442c1c size=280 calls_out=2 calls_in=3
// strings: 

void FUN_01442c1c(undefined4 *param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int local_24 [2];
  short local_1c;
  
  bVar2 = false;
  if (*(int *)(param_2 + 0x10) == 0) {
    bVar1 = true;
    local_1c = 0;
  }
  else {
    FUN_01415bb0(local_24,*(undefined4 *)(param_2 + 0xc));
    bVar1 = local_24[0] == 0;
  }
  if (*param_2 != '\0') {
    if (*param_2 == '\x02') {
      puVar3 = *(undefined **)(*(int *)(param_2 + 4) + 4);
      if (puVar3 != (undefined *)0x0) {
        iVar4 = *(int *)(*(int *)(param_2 + 4) + 8);
        if (iVar4 == 5) goto LAB_01442cc4;
        if (iVar4 == 3) {
          uVar6 = 3;
          puVar5 = &DAT_00532790;
          goto LAB_01442cd0;
        }
      }
    }
    else if (param_2[1] != '\0') {
      puVar3 = &DAT_0053278b;
LAB_01442cc4:
      uVar6 = 5;
      puVar5 = &DAT_0053278b;
LAB_01442cd0:
      iVar4 = thunk_FUN_01bed842(puVar3,puVar5,uVar6);
      bVar2 = iVar4 == 0;
    }
  }
  if (!bVar1) {
    if (bVar2) {
      if (local_1c == 0x1bb) goto LAB_01442d24;
    }
    else if (local_1c == 0x50) goto LAB_01442d24;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_01415bb0(param_1,*(undefined4 *)(param_2 + 0xc));
    return;
  }
LAB_01442d24:
  *param_1 = 0;
  return;
}

