// FUN_0128abd8 @ 0128abd8 size=308 calls_out=1 calls_in=1
// strings: 

void FUN_0128abd8(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_2) {
  default:
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    return;
  case 1:
    uVar8 = FUN_00666760(param_2[1],param_2[2]);
    *(undefined8 *)(param_1 + 1) = uVar8;
    uVar4 = 1;
    break;
  case 3:
    uVar8 = FUN_00666760(param_2[1],param_2[2]);
    *(undefined8 *)(param_1 + 1) = uVar8;
    uVar4 = 3;
    break;
  case 4:
    uVar2 = *(undefined2 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = 4;
    *(undefined2 *)((int)param_1 + 1) = uVar2;
    return;
  case 5:
    bVar1 = *(byte *)((int)param_2 + 1);
    cVar3 = '\x13';
    if (3 < bVar1) {
      cVar3 = bVar1 - 4;
    }
    bVar5 = 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar3) {
    case '\x01':
      bVar5 = 5;
      break;
    case '\x02':
      bVar5 = 6;
      break;
    case '\x03':
      bVar5 = 7;
      break;
    case '\x04':
      bVar5 = 8;
      break;
    case '\x05':
      bVar5 = 9;
      break;
    case '\x06':
      bVar5 = 10;
      break;
    case '\a':
      bVar5 = 0xb;
      break;
    case '\b':
      bVar5 = 0xc;
      break;
    case '\t':
      bVar5 = 0xd;
      break;
    case '\n':
      bVar5 = 0xe;
      break;
    case '\v':
      bVar5 = 0xf;
      break;
    case '\f':
      bVar5 = 0x10;
      break;
    case '\r':
      bVar5 = 0x11;
      break;
    case '\x0e':
      bVar5 = 0x12;
      break;
    case '\x0f':
      bVar5 = 0x13;
      break;
    case '\x10':
      bVar5 = 0x14;
      break;
    case '\x11':
      bVar5 = 0x15;
      break;
    case '\x12':
      bVar5 = 0x16;
      break;
    case '\x13':
      bVar5 = bVar1;
    }
    *(byte *)((int)param_1 + 1) = bVar5;
    *(undefined1 *)param_1 = 5;
    return;
  case 6:
    uVar4 = 6;
  }
  *(undefined1 *)param_1 = uVar4;
  return;
}

