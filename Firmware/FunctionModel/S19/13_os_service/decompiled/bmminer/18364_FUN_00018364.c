// FUN_00018364 @ 00018364  size=424  callers=1
// program: bmminer


void FUN_00018364(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  size_t __size;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  pthread_attr_t apStack_820 [57];
  
  iVar2 = FUN_00017028();
  iVar3 = FUN_000200d8();
  if (iVar3 < iVar2) {
    iVar2 = FUN_00017028();
  }
  else {
    iVar2 = FUN_000200d8();
  }
  if (3 < DAT_00087bbc) {
    snprintf(apStack_820[0].__size,0x800,"max sensor num = %d",iVar2);
    FUN_00032218(3,apStack_820,0);
  }
  pvVar4 = malloc(0x10);
  DAT_00088840 = pvVar4;
  puVar5 = malloc(0x30);
  pvVar6 = calloc(iVar2 * 0x48,1);
  iVar3 = iVar2 * 6;
  puVar8 = (undefined4 *)((int)pvVar4 + -4);
  puVar9 = puVar5 + 0xc;
  pvVar4 = pvVar6;
  do {
    puVar8 = puVar8 + 1;
    *puVar8 = puVar5;
    pvVar10 = (void *)(iVar3 + iVar3 + (int)pvVar4);
    *puVar5 = pvVar4;
    puVar5[1] = (void *)(iVar3 + (int)pvVar4);
    puVar5[2] = pvVar10;
    puVar5 = puVar5 + 3;
    pvVar4 = (void *)(iVar3 + (int)pvVar10);
  } while (puVar9 != puVar5);
  DAT_0008904c = (void *)((int)pvVar6 + iVar2 * 0x48);
  iVar2 = FUN_00017028();
  DAT_00088824 = malloc(iVar2 << 2);
  for (iVar2 = 0; iVar3 = FUN_00017028(), pvVar4 = DAT_00088824, iVar2 < iVar3; iVar2 = iVar2 + 1) {
    uVar7 = FUN_000200bc(iVar2);
    *(undefined4 *)((int)pvVar4 + iVar2 * 4) = uVar7;
  }
  __size = FUN_000200d8();
  DAT_00089050 = malloc(__size);
  for (iVar2 = 0; iVar3 = FUN_000200d8(), iVar2 < iVar3; iVar2 = iVar2 + 1) {
    uVar1 = FUN_000200e8(iVar2);
    *(undefined1 *)((int)DAT_00089050 + iVar2) = uVar1;
  }
  pthread_attr_init(apStack_820);
  pthread_attr_setstacksize(apStack_820,0x100000);
  DAT_00089054 = 1;
  pthread_create(&DAT_00089058,apStack_820,(__start_routine *)&DAT_00018dc8,(void *)0x0);
  pthread_detach(DAT_00089058);
  return;
}

