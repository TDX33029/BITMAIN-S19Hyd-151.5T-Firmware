// FUN_00c63be8 @ 00c63be8 size=216 calls_out=1 calls_in=5
// strings: 

void FUN_00c63be8(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_1c [3];
  
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 < uVar5) {
LAB_00c63c04:
    cVar1 = *(char *)(*(int *)(param_1 + 0xc) + uVar3);
    switch(cVar1) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      goto switchD_00c63c1c_caseD_9;
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
      goto switchD_00c63c1c_caseD_b;
    case ',':
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0x14) = uVar3;
      if (uVar3 < uVar5) goto LAB_00c63ce4;
      goto switchD_00c63c1c_caseD_b;
    default:
      if (cVar1 == ']') {
        *(uint *)(param_1 + 0x14) = uVar3 + 1;
        return;
      }
      goto switchD_00c63c1c_caseD_b;
    }
  }
LAB_00c63cc0:
  local_1c[0] = 2;
  goto LAB_00c63d3c;
switchD_00c63c1c_caseD_9:
  uVar3 = uVar3 + 1;
  *(uint *)(param_1 + 0x14) = uVar3;
  if (uVar5 == uVar3) goto LAB_00c63cc0;
  goto LAB_00c63c04;
  while( true ) {
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + 0x14) = uVar3;
    if (uVar5 == uVar3) break;
LAB_00c63ce4:
    uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar3);
    uVar2 = uVar4 - 9;
    if ((0x17 < uVar2) || ((1 << (uVar2 & 0xff) & 0x800013U) == 0)) {
      if (uVar4 == 0x5d) {
        local_1c[0] = 0x15;
        goto LAB_00c63d3c;
      }
      break;
    }
  }
switchD_00c63c1c_caseD_b:
  local_1c[0] = 0x16;
LAB_00c63d3c:
  FUN_00c629ac(param_1,local_1c);
  return;
}

