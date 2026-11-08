// FUN_01be7e7e @ 01be7e7e size=266 calls_out=6 calls_in=3
// strings: 

undefined4 FUN_01be7e7e(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [4];
  char *local_6c;
  char local_68;
  byte local_67;
  undefined1 auStack_58 [64];
  
  iVar1 = FUN_01be7bec(param_2,auStack_70);
  if (0 < iVar1) {
    if (param_3 == 10) {
      return 0xfffffffb;
    }
    FUN_01bed4e2(param_1 + 2,auStack_70,4);
    *param_1 = 2;
    param_1[1] = 0;
    return 1;
  }
  pcVar2 = (char *)FUN_01bedada(param_2,0x25);
  puVar4 = param_2;
  if ((pcVar2 != (char *)0x0) && (iVar1 = (int)pcVar2 - (int)param_2, iVar1 < 0x40)) {
    puVar4 = auStack_58;
    FUN_01bed4e2(puVar4,param_2,iVar1);
    auStack_58[iVar1] = 0;
  }
  iVar1 = FUN_01be7c86(10,puVar4,&local_68);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_3 == 2) {
    return 0xfffffffb;
  }
  FUN_01bed4e2(param_1 + 2,&local_68,0x10);
  *param_1 = 10;
  if (pcVar2 == (char *)0x0) {
LAB_01be7f10:
    iVar1 = 0;
LAB_01be7f12:
    uVar3 = 1;
    param_1[1] = iVar1;
  }
  else {
    if ((byte)pcVar2[1] - 0x30 < 10) {
      uVar5 = FUN_01bed408(pcVar2 + 1,&local_6c);
      iVar1 = (int)uVar5;
      if (*local_6c != '\0') goto LAB_01be7f42;
      if ((int)((ulonglong)uVar5 >> 0x20) == 0) goto LAB_01be7f12;
    }
    else {
      local_6c = pcVar2;
      if (*pcVar2 == '\0') goto LAB_01be7f10;
LAB_01be7f42:
      if (local_68 == -2) {
        if ((local_67 & 0xc0) == 0x80) goto LAB_01be7f5a;
      }
      else if ((local_68 == -1) && ((local_67 & 0xf) == 2)) {
LAB_01be7f5a:
        iVar1 = FUN_01be7ba0(pcVar2 + 1);
        if (iVar1 != 0) goto LAB_01be7f12;
      }
    }
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

