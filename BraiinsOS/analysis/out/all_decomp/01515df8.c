// FUN_01515df8 @ 01515df8 size=348 calls_out=2 calls_in=3
// strings: 

bool FUN_01515df8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 local_24 [2];
  undefined4 local_1c;
  
  puVar5 = (ushort *)((int)param_1 + 0xe);
  local_1c = 0;
  local_24[0] = 0;
  iVar1 = param_2 << 4;
  do {
    iVar4 = iVar1;
    if (iVar4 == 0) break;
    iVar1 = *param_1;
    uVar3 = *(ushort *)(param_1 + 3);
    param_1 = param_1 + 4;
    if (iVar1 == -0x7fffffff) {
      uVar3 = 0x19;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar3 & 0xff) {
    case 0x11:
      uVar3 = 0x12;
      break;
    case 0x12:
      uVar3 = 0x13;
      break;
    case 0x13:
      uVar3 = 0x14;
      break;
    case 0x14:
      uVar3 = 0x15;
      break;
    case 0x15:
      uVar3 = 0x17;
      break;
    case 0x16:
      uVar3 = 0x1b;
      break;
    case 0x17:
      uVar3 = 0x23;
      break;
    case 0x18:
      uVar3 = 0x29;
      break;
    case 0x19:
      uVar3 = 0x2a;
      break;
    case 0x1a:
      uVar3 = 0x2b;
      break;
    case 0x1b:
      uVar3 = 0x2c;
      break;
    case 0x1c:
      uVar3 = 0x2d;
      break;
    case 0x1d:
      uVar3 = 0x2e;
      break;
    case 0x1e:
      uVar3 = 0x2f;
      break;
    case 0x1f:
      uVar3 = 0x30;
      break;
    case 0x20:
      uVar3 = 0x31;
      break;
    case 0x21:
      uVar3 = 0x32;
      break;
    case 0x22:
      uVar3 = 0x33;
      break;
    case 0x23:
      uVar3 = 0x39;
      break;
    case 0x24:
      uVar3 = 0x3374;
      break;
    case 0x25:
      uVar3 = 0x754f;
      break;
    case 0x26:
      uVar3 = 0xff01;
      break;
    case 0x27:
      uVar3 = 0xffa5;
      break;
    case 0x28:
      uVar3 = 0xfe0d;
      break;
    case 0x29:
      uVar3 = 0xfd00;
      break;
    case 0x2a:
      uVar3 = *puVar5;
    }
    iVar2 = FUN_0156a7f8(local_24,uVar3);
    puVar5 = puVar5 + 8;
    iVar1 = iVar4 + -0x10;
  } while (iVar2 == 0);
  FUN_0156bc34(local_24);
  return iVar4 != 0;
}

