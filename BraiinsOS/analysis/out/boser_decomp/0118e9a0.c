// FUN_0118e9a0 @ 0118e9a0 size=308 calls_out=7 calls_in=1
// strings: 

void FUN_0118e9a0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x97);
  if (cVar1 == '\0') {
    FUN_00b9c200(param_1 + 0x20);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00928864(param_1 + 0x98);
    FUN_01834abc(param_1 + 0x98);
    goto LAB_0118eaa0;
  }
  if (cVar1 != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x123);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x15c) == '\0') {
      iVar2 = param_1 + 0x140;
LAB_0118ea88:
      FUN_009286c8(iVar2);
    }
    else if (*(char *)(param_1 + 0x15c) == '\x03') {
      iVar2 = param_1 + 0x128;
      goto LAB_0118ea88;
    }
    FUN_0084eeb4(param_1 + 0x118);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00b9c200(param_1 + 0xb8);
      }
      goto LAB_0118eaa0;
    }
    if (*(char *)(param_1 + 0x2a4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x29c);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x278);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x27c);
      }
      FUN_00dfba60(param_1 + 0x1d0);
      *(undefined1 *)(param_1 + 0x2a5) = 0;
    }
    else if (*(char *)(param_1 + 0x2a4) == '\0') {
      FUN_00dfba60(param_1 + 0x140);
    }
    FUN_009286c8(param_1 + 0x128);
    FUN_0084eeb4(param_1 + 0x118);
  }
  *(undefined2 *)(param_1 + 0x120) = 0;
LAB_0118eaa0:
  *(undefined1 *)(param_1 + 0x95) = 0;
  if (*(char *)(param_1 + 0x94) != '\0') {
    FUN_01834abc(param_1);
  }
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}

