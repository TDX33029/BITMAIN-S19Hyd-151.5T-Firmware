// FUN_018eb4c8 @ 018eb4c8 size=156 calls_out=0 calls_in=9
// strings: 

longlong FUN_018eb4c8(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  uVar1 = 0xb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 1:
    return (ulonglong)uVar2 << 0x20;
  case 2:
    return CONCAT44(uVar2,0x17);
  case 3:
    return CONCAT44(uVar2,0x26);
  case 4:
    return CONCAT44(uVar2,0x10);
  case 5:
    return CONCAT44(uVar2,0x22);
  case 6:
    return CONCAT44(uVar2,0x18);
  case 7:
    return CONCAT44(uVar2,0x15);
  case 8:
    return CONCAT44(uVar2,5);
  case 9:
    return CONCAT44(uVar2,0x13);
  case 10:
    return CONCAT44(uVar2,0x12);
  case 0xb:
    return CONCAT44(uVar2,0x1a);
  case 0xc:
    return CONCAT44(uVar2,0x23);
  case 0xd:
    return CONCAT44(uVar2,0x27);
  case 0xe:
    return CONCAT44(uVar2,0x19);
  case 0xf:
    return CONCAT44(uVar2,0x28);
  case 0x10:
    uVar2 = (uint)*(ushort *)(param_1 + 0x12);
    uVar1 = (uint)*(ushort *)(param_1 + 0x10);
  }
  return CONCAT44(uVar2,uVar1);
}

