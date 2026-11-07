// FUN_0188f7fc @ 0188f7fc size=384 calls_out=9 calls_in=1
// strings: InvalidEncoding

void FUN_0188f7fc(ulonglong *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_24 [12];
  
  if ((param_3 != 0) && (*param_2 == '\0')) {
    pcVar6 = "InvalidEncoding";
LAB_0188f8a0:
    *(undefined4 *)param_1 = 0;
    *(char **)((int)param_1 + 4) = pcVar6;
    *(undefined4 *)(param_1 + 1) = 0xf;
    return;
  }
  FUN_0189ba04(auStack_24,param_3 + 3U >> 2);
  uVar7 = FUN_0189b9a4(auStack_24);
  iVar4 = (int)(uVar7 >> 0x20);
  puVar1 = (undefined4 *)uVar7;
  iVar2 = FUN_01895ca0(param_2,param_3,puVar1,iVar4);
  if (iVar2 != 0) {
    pcVar6 = &DAT_0051d665;
    if (iVar4 != 0) {
      thunk_FUN_01be4678(puVar1);
    }
    goto LAB_0188f8a0;
  }
  if (uVar7 < 0x10100000000) {
    if (uVar7 < 0x400000000) {
      *(undefined4 *)param_1 = 0;
      *(undefined **)((int)param_1 + 4) = &DAT_0051d665;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (iVar4 == 0) {
        return;
      }
      goto LAB_0188f938;
    }
    iVar2 = FUN_01bd4fd4(puVar1,iVar4);
    if (iVar2 == 0) {
      iVar2 = FUN_01bd5070(puVar1,3,iVar4);
      if (iVar2 == 0) {
        uVar8 = FUN_01bcfa80(*puVar1,puVar1[1]);
        uVar5 = FUN_01895f10(puVar1,iVar4);
        *param_1 = uVar7;
        param_1[1] = uVar8;
        *(undefined4 *)(param_1 + 2) = uVar5;
        return;
      }
      uVar5 = 0xf;
      puVar3 = &DAT_0051d665;
    }
    else {
      uVar5 = 0x10;
      puVar3 = &DAT_00569538;
    }
  }
  else {
    uVar5 = 8;
    puVar3 = &DAT_005708a8;
  }
  *(undefined **)((int)param_1 + 4) = puVar3;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)param_1 = 0;
LAB_0188f938:
  thunk_FUN_01be4678(puVar1);
  return;
}

