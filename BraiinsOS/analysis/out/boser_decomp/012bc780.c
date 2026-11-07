// FUN_012bc780 @ 012bc780 size=300 calls_out=4 calls_in=15
// strings: 

int FUN_012bc780(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8a [14];
  undefined1 auStack_7c [14];
  undefined1 auStack_6e [14];
  undefined1 auStack_60 [14];
  undefined1 auStack_52 [14];
  undefined1 auStack_44 [14];
  undefined1 auStack_36 [14];
  undefined1 auStack_28 [16];
  
  puVar2 = (undefined *)FUN_012b9138(param_2 + 0x74);
  puVar4 = &DAT_00420598;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
  }
  cVar1 = puVar4[0x70];
  if (cVar1 != '\x04') {
    FUN_01bed4e2(auStack_28,puVar4 + 0x71,0xd);
  }
  FUN_01bed4e2(&local_98,puVar4,0xe);
  FUN_01bed4e2(auStack_8a,puVar4 + 0xe,0xe);
  FUN_01bed4e2(auStack_7c,puVar4 + 0x1c,0xe);
  FUN_01bed4e2(auStack_6e,puVar4 + 0x2a,0xe);
  FUN_01bed4e2(auStack_60,puVar4 + 0x38,0xe);
  FUN_01bed4e2(auStack_52,puVar4 + 0x46,0xe);
  FUN_01bed4e2(auStack_44,puVar4 + 0x54,0xe);
  FUN_01bed4e2(auStack_36,puVar4 + 0x62,0xe);
  FUN_01bed4e2(param_1 + 0x3c,&local_98,0x70);
  *(char *)(param_1 + 0xac) = cVar1;
  FUN_01bed4e2(param_1 + 0xad,auStack_28,0xd);
  *(undefined2 *)(param_1 + 0xbb) = 0x202;
  FUN_012bbad0(&local_98,param_2);
  iVar3 = *(int *)(param_1 + 0x28);
  if (-0x7fffffff < iVar3) {
    FUN_0134bd64(iVar3,*(undefined4 *)(param_1 + 0x2c));
  }
  *(int *)(param_1 + 0x28) = local_98;
  *(undefined4 *)(param_1 + 0x2c) = uStack_94;
  *(undefined4 *)(param_1 + 0x30) = uStack_90;
  return param_1;
}

