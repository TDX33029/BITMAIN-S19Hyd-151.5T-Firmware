// FUN_013da5bc @ 013da5bc size=508 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013da5bc(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 *local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined1 *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  
  ppuVar2 = &local_38;
  if (*param_1 == '\x01') {
    puVar5 = (undefined1 *)*param_2;
    puVar6 = (undefined *)param_2[1];
    pcVar4 = *(code **)(puVar6 + 0xc);
    iVar1 = (*pcVar4)(puVar5,&DAT_0052c2af,3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar4)(puVar5,&DAT_004745b6,6);
      goto LAB_013da78c;
    }
    iVar1 = (*pcVar4)(puVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = (undefined1 *)CONCAT31(local_38._1_3_,1);
    local_28 = puVar5;
    local_24 = puVar6;
    local_20 = (undefined1 *)&local_38;
    iVar1 = FUN_01302620(&local_28,&DAT_004745b6,6);
    if (iVar1 != 0) {
      return 1;
    }
    ppuVar2 = &local_28;
  }
  else {
    puVar5 = (undefined1 *)*param_2;
    iVar7 = param_2[1];
    pcVar4 = *(code **)(iVar7 + 0xc);
    iVar1 = (*pcVar4)(puVar5,&DAT_0052e42c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_012fb940(param_2,"()",2);
      goto LAB_013da78c;
    }
    iVar1 = (*pcVar4)(puVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_30 = &local_29;
    local_20 = (undefined1 *)param_2[2];
    local_1c = param_2[3];
    local_24 = &DAT_01ce45f8;
    local_29 = 1;
    local_38 = puVar5;
    local_34 = iVar7;
    local_28 = (undefined1 *)&local_38;
    iVar1 = FUN_012fb940(&local_28,"()",2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  iVar1 = FUN_01302620(ppuVar2,&DAT_005312e2,2);
LAB_013da78c:
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = (*pcVar4)(puVar5,&DAT_0053341b,1);
  }
  return uVar3;
}

