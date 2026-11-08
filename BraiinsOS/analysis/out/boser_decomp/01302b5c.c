// FUN_01302b5c @ 01302b5c size=204 calls_out=1 calls_in=4
// strings: ; .. } |  { .. }

void FUN_01302b5c(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 *local_18;
  undefined1 local_11;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 1) == '\0') {
    puVar7 = (undefined4 *)*param_1;
    if (*(char *)((int)param_1 + 5) == '\0') {
      uVar2 = *puVar7;
      uVar5 = 7;
      pcVar6 = *(code **)(puVar7[1] + 0xc);
      pcVar4 = " { .. }";
    }
    else if ((*(byte *)((int)puVar7 + 10) & 0x80) == 0) {
      uVar2 = *puVar7;
      uVar5 = 6;
      pcVar6 = *(code **)(puVar7[1] + 0xc);
      pcVar4 = ", .. }";
    }
    else {
      local_18 = &local_11;
      local_20 = *puVar7;
      uStack_1c = puVar7[1];
      local_11 = 1;
      iVar3 = FUN_01302620(&local_20,"..\n",3);
      if (iVar3 != 0) {
        uVar1 = 1;
        goto LAB_01302bc8;
      }
      uVar2 = *puVar7;
      uVar5 = 1;
      pcVar6 = *(code **)(puVar7[1] + 0xc);
      pcVar4 = "}";
    }
    uVar1 = (*pcVar6)(uVar2,pcVar4,uVar5);
  }
LAB_01302bc8:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

