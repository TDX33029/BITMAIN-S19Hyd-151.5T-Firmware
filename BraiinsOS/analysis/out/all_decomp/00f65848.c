// FUN_00f65848 @ 00f65848 size=660 calls_out=3 calls_in=1
// strings: 

void FUN_00f65848(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_2) {
  default:
    uVar6 = param_2[1];
    uVar8 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    param_1[2] = uVar8;
    return;
  case 1:
    iVar7 = param_2[2];
    uVar8 = param_2[1];
    iVar3 = 1;
    if ((iVar7 == 0) || (iVar3 = thunk_FUN_016d4a50(iVar7), iVar3 != 0)) {
      FUN_016dd1aa(iVar3,uVar8,iVar7);
      param_1[1] = iVar3;
      param_1[2] = iVar7;
      *(undefined1 *)param_1 = 1;
      return;
    }
LAB_00f65918:
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,iVar7);
  case 3:
    iVar7 = param_2[2];
    uVar8 = param_2[1];
    if (iVar7 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar7);
      if (iVar3 == 0) goto LAB_00f65918;
    }
    break;
  case 4:
    uVar2 = *(undefined2 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = 4;
    *(undefined2 *)((int)param_1 + 1) = uVar2;
    return;
  case 5:
    bVar1 = *(byte *)((int)param_2 + 1);
    cVar4 = '\x13';
    if (3 < bVar1) {
      cVar4 = bVar1 - 4;
    }
    bVar5 = 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar4) {
    case '\x01':
      *(undefined1 *)((int)param_1 + 1) = 5;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x02':
      *(undefined1 *)((int)param_1 + 1) = 6;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x03':
      *(undefined1 *)((int)param_1 + 1) = 7;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x04':
      *(undefined1 *)((int)param_1 + 1) = 8;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x05':
      *(undefined1 *)((int)param_1 + 1) = 9;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x06':
      *(undefined1 *)((int)param_1 + 1) = 10;
      *(undefined1 *)param_1 = 5;
      return;
    case '\a':
      *(undefined1 *)((int)param_1 + 1) = 0xb;
      *(undefined1 *)param_1 = 5;
      return;
    case '\b':
      *(undefined1 *)((int)param_1 + 1) = 0xc;
      *(undefined1 *)param_1 = 5;
      return;
    case '\t':
      *(undefined1 *)((int)param_1 + 1) = 0xd;
      *(undefined1 *)param_1 = 5;
      return;
    case '\n':
      *(undefined1 *)((int)param_1 + 1) = 0xe;
      *(undefined1 *)param_1 = 5;
      return;
    case '\v':
      *(undefined1 *)((int)param_1 + 1) = 0xf;
      *(undefined1 *)param_1 = 5;
      return;
    case '\f':
      *(undefined1 *)((int)param_1 + 1) = 0x10;
      *(undefined1 *)param_1 = 5;
      return;
    case '\r':
      *(undefined1 *)((int)param_1 + 1) = 0x11;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x0e':
      *(undefined1 *)((int)param_1 + 1) = 0x12;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x0f':
      *(undefined1 *)((int)param_1 + 1) = 0x13;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x10':
      *(undefined1 *)((int)param_1 + 1) = 0x14;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x11':
      *(undefined1 *)((int)param_1 + 1) = 0x15;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x12':
      *(undefined1 *)((int)param_1 + 1) = 0x16;
      *(undefined1 *)param_1 = 5;
      return;
    case '\x13':
      bVar5 = bVar1;
    }
    *(byte *)((int)param_1 + 1) = bVar5;
    *(undefined1 *)param_1 = 5;
    return;
  case 6:
    *(undefined1 *)param_1 = 6;
    return;
  }
  FUN_016dd1aa(iVar3,uVar8,iVar7);
  param_1[1] = iVar3;
  param_1[2] = iVar7;
  *(undefined1 *)param_1 = 3;
  return;
}

