// FUN_0159a85c @ 0159a85c size=444 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_0159a85c(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_28;
  
  if ((*param_2 == '\x03') && (uVar4 = *(uint *)(param_2 + 0xc), uVar4 != 0)) {
    iVar5 = *(int *)(param_2 + 8);
    uVar1 = 0;
    do {
      uVar2 = (uint)*(byte *)(iVar5 + uVar1);
      if (uVar2 == 0x25) {
        if (uVar4 <= uVar1 + 2) {
          return 0;
        }
        uVar2 = (uint)((byte *)(iVar5 + uVar1))[1];
        if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
          return 0;
        }
        uVar2 = (uint)*(byte *)(iVar5 + uVar1 + 2);
        iVar3 = 3;
        if ((9 < uVar2 - 0x30) && (5 < (uVar2 & 0xdf) - 0x41)) {
          return 0;
        }
LAB_0159a9d8:
        uVar1 = iVar3 + uVar1;
      }
      else {
        if (uVar2 != 0x7b) {
          if (uVar2 == 0x7d) {
            return 0;
          }
          if (uVar2 < 0x21) {
            return 0;
          }
          if ((uVar2 - 0x22 < 0x1d) && ((1 << (uVar2 - 0x22 & 0xff) & 0x14000029U) != 0)) {
            return 0;
          }
          if ((uVar2 - 0x7b < 5) && (uVar2 - 0x7b != 3)) {
            return 0;
          }
          iVar3 = 1;
          if ((uVar2 - 0x5c < 5) && ((1 << (uVar2 - 0x5c & 0xff) & 0x15U) != 0)) {
            return 0;
          }
          goto LAB_0159a9d8;
        }
        local_28 = uVar1 + 1;
        if (uVar4 <= local_28) {
          return 0;
        }
        uVar2 = *(byte *)(iVar5 + local_28) - 0x21;
        if ((((uVar2 < 0x20) && ((1 << (uVar2 & 0xff) & 0xd4006c25U) != 0)) ||
            (*(byte *)(iVar5 + local_28) == 0x7c)) && (local_28 = uVar1 + 2, uVar4 <= local_28)) {
          return 0;
        }
        while( true ) {
          iVar3 = FUN_0159aa18(iVar5,uVar4,&local_28);
          if (iVar3 == 0) {
            return 0;
          }
          if (uVar4 <= local_28) {
            return 0;
          }
          if (*(char *)(iVar5 + local_28) != ',') break;
          local_28 = local_28 + 1;
        }
        if (*(char *)(iVar5 + local_28) != '}') {
          return 0;
        }
        uVar1 = local_28 + 1;
      }
    } while (uVar1 < uVar4);
  }
  return 1;
}

