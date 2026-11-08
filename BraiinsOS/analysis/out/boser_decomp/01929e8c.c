// FUN_01929e8c @ 01929e8c size=352 calls_out=5 calls_in=2
// strings: 

void FUN_01929e8c(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined2 local_28;
  
  if (param_5 == 0) {
    local_a0 = -0x80000000;
  }
  else {
    FUN_015e8ad4(&local_a0,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8));
  }
  piVar3 = (int *)(param_2 + 0x21c);
  if (*piVar3 != -0x80000000) {
    FUN_0134bd64(*piVar3,*(undefined4 *)(param_2 + 0x220));
  }
  *piVar3 = local_a0;
  *(undefined4 *)(param_2 + 0x220) = local_9c;
  *(undefined4 *)(param_2 + 0x224) = uStack_98;
  iVar8 = *piVar3;
  if (iVar8 == -0x80000000) {
LAB_01929f00:
    if ((*(char *)(param_2 + 0x259) != '\0' && param_4 != 0) && (iVar8 == -0x80000000)) {
      local_a0 = -0x7fffffdb;
      FUN_018f1f40(param_1,param_2,0x21,&local_a0);
      return;
    }
    puVar1 = (undefined1 *)0x80000029;
  }
  else {
    if (param_4 != 0) {
      uVar4 = *(undefined4 *)(param_2 + 0x220);
      iVar7 = *(int *)(param_2 + 0x224);
      puVar5 = (undefined4 *)(param_3 + 4);
      iVar6 = param_4 * 0xc;
      do {
        if ((puVar5[1] == iVar7) && (iVar2 = thunk_FUN_01bed842(*puVar5,uVar4,iVar7), iVar2 == 0))
        goto LAB_01929f00;
        puVar5 = puVar5 + 3;
        iVar6 = iVar6 + -0xc;
      } while (iVar6 != 0);
    }
    local_28 = 4;
    local_a0 = -0x7fffffff;
    local_9c = 0xd0001;
    FUN_018f1fc4(param_2,&local_a0,*(char *)(param_2 + 0x31) == '\x02');
    *(undefined1 *)(param_1 + 1) = 0x32;
    *(undefined1 *)(param_2 + 0x255) = 1;
    puVar1 = &DAT_8000001c;
  }
  *param_1 = puVar1;
  return;
}

