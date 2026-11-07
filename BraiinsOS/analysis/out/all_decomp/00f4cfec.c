// FUN_00f4cfec @ 00f4cfec size=136 calls_out=1 calls_in=9
// strings: 

void FUN_00f4cfec(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 local_1c [3];
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
LAB_00f4d0c4:
    local_1c[0] = 3;
LAB_00f4d0e8:
    FUN_01143ab8(param_1,local_1c);
    return;
  }
LAB_00f4d008:
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + uVar2);
  switch(cVar1) {
  case '\t':
  case '\n':
  case '\r':
  case ' ':
    break;
  case ',':
    local_1c[0] = 0x15;
    goto LAB_00f4d0e8;
  default:
    if (cVar1 == '}') {
      *(uint *)(param_1 + 0x14) = uVar2 + 1;
      return;
    }
  case '\v':
  case '\f':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
    local_1c[0] = 0x16;
    goto LAB_00f4d0e8;
  }
  uVar2 = uVar2 + 1;
  *(uint *)(param_1 + 0x14) = uVar2;
  if (*(uint *)(param_1 + 0x10) == uVar2) goto LAB_00f4d0c4;
  goto LAB_00f4d008;
}

