// FUN_013b097c @ 013b097c size=468 calls_out=2 calls_in=2
// strings: 

void FUN_013b097c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [92];
  
  iVar3 = 0;
  local_c0 = 0;
  if (param_4[10] == 0) {
    local_c0 = 2;
  }
  local_b4 = 0;
  local_b8 = param_4;
  while (uVar4 = FUN_0141117c(&local_c0), piVar1 = (int *)uVar4, piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      iVar2 = 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar1[1]) {
      case '\0':
      case '\x1e':
      case '\"':
      case '0':
      case '1':
      case '@':
        break;
      case '\x01':
      case '\x18':
        iVar2 = 0xe;
        break;
      case '\x02':
      case '\x03':
      case '4':
      case '8':
      case 'O':
        iVar2 = 0xf;
        break;
      case '\x04':
      case '\x10':
      case '\x11':
      case '\x1a':
      case ')':
      case ',':
        iVar2 = 0xd;
        break;
      case '\x05':
        iVar2 = 0x20;
        break;
      case '\x06':
      case '\a':
        iVar2 = 0x1c;
        break;
      case '\b':
      case '5':
        iVar2 = 0x1b;
        break;
      case '\t':
      case '\f':
        iVar2 = 0x1d;
        break;
      case '\n':
      case '>':
      case 'M':
      case 'N':
        iVar2 = 0x16;
        break;
      case '\v':
        iVar2 = 0x1e;
        break;
      case '\r':
      case '\x1f':
      case 'J':
        iVar2 = 3;
        break;
      case '\x0e':
      case '6':
        iVar2 = 5;
        break;
      default:
        iVar2 = 7;
        break;
      case '\x12':
      case '\x1d':
      case '/':
        iVar2 = 0xc;
        break;
      case '\x13':
      case '(':
      case '=':
      case 'E':
        iVar2 = 0x11;
        break;
      case '\x14':
      case 'A':
      case 'F':
        iVar2 = 10;
        break;
      case '\x15':
      case '+':
      case '3':
        iVar2 = 0x13;
        break;
      case '\x16':
      case '\x17':
      case '\x19':
      case 'L':
      case 'P':
        iVar2 = 0x10;
        break;
      case '\x1b':
        iVar2 = 0x17;
        break;
      case '\x1c':
        iVar2 = 0x23;
        break;
      case ' ':
      case '!':
      case '%':
      case '&':
      case '-':
      case 'I':
        iVar2 = 4;
        break;
      case '$':
        iVar2 = 9;
        break;
      case '\'':
      case '*':
      case '.':
        iVar2 = 8;
        break;
      case '2':
        iVar2 = 0x12;
        break;
      case ':':
        iVar2 = 0xb;
        break;
      case ';':
        iVar2 = 0x14;
        break;
      case '<':
        iVar2 = 0x18;
        break;
      case '?':
        iVar2 = 0x15;
        break;
      case 'B':
      case 'H':
        iVar2 = 0x19;
        break;
      case 'C':
        iVar2 = 2;
      }
    }
    else {
      iVar2 = piVar1[2];
    }
    iVar3 = iVar3 + iVar2 + *(int *)((int)((ulonglong)uVar4 >> 0x20) + 8) + 0x20;
  }
  local_c0 = *param_4;
  uStack_bc = param_4[1];
  local_b8 = (undefined4 *)param_4[2];
  local_b4 = param_4[3];
  uStack_b0 = param_4[4];
  local_ac = param_4[5];
  uStack_a8 = param_4[6];
  uStack_a4 = param_4[7];
  uStack_a0 = param_4[8];
  uStack_9c = param_4[9];
  local_98 = param_4[10];
  uStack_94 = param_4[0xb];
  uStack_90 = param_4[0xc];
  uStack_8c = param_4[0xd];
  uStack_88 = param_4[0xe];
  uStack_84 = param_4[0xf];
  FUN_01bed4e2(auStack_80,param_3,0x58);
  *(undefined1 *)(param_1 + 0xa5) = 2;
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  FUN_01bed4e2(param_1,&local_c0,0x98);
  *(int *)(param_1 + 0x98) = iVar3;
  *(undefined1 *)(param_1 + 0xac) = 4;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  return;
}

