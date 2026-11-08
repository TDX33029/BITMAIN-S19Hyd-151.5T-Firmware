// FUN_01228ca8 @ 01228ca8 size=380 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01228ca8(undefined4 param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_1c;
  
  if ((*param_2 == '\x03') && (uVar5 = *(uint *)(param_2 + 0xc), uVar5 != 0)) {
    iVar6 = *(int *)(param_2 + 8);
    uVar2 = 0;
    do {
      bVar1 = *(byte *)(iVar6 + uVar2);
      if (bVar1 == 0x25) {
        if (uVar5 <= uVar2 + 2) {
          return 0;
        }
        uVar4 = (uint)((byte *)(iVar6 + uVar2))[1];
        if ((9 < uVar4 - 0x30) && (5 < (uVar4 & 0xdf) - 0x41)) {
          return 0;
        }
        uVar4 = (uint)*(byte *)(iVar6 + uVar2 + 2);
        iVar3 = 3;
        if ((9 < uVar4 - 0x30) && (5 < (uVar4 & 0xdf) - 0x41)) {
          return 0;
        }
switchD_01228d1c_caseD_23:
        uVar2 = iVar3 + uVar2;
      }
      else {
        if (bVar1 != 0x7b) {
          if (bVar1 == 0x7d) {
            return 0;
          }
          if (bVar1 < 0x21) {
            return 0;
          }
          iVar3 = 1;
          switch(bVar1) {
          case 0x22:
          case 0x25:
          case 0x27:
          case 0x3c:
          case 0x3e:
          case 0x5c:
          case 0x5e:
          case 0x60:
          case 0x7b:
          case 0x7c:
          case 0x7d:
          case 0x7f:
            return 0;
          }
          goto switchD_01228d1c_caseD_23;
        }
        local_1c = uVar2 + 1;
        if (uVar5 <= local_1c) {
          return 0;
        }
        switch(*(undefined1 *)(iVar6 + local_1c)) {
        case 0x21:
        case 0x23:
        case 0x26:
        case 0x2b:
        case 0x2c:
        case 0x2e:
        case 0x2f:
        case 0x3b:
        case 0x3d:
        case 0x3f:
        case 0x40:
        case 0x7c:
          local_1c = uVar2 + 2;
          if (uVar5 <= local_1c) {
            return 0;
          }
        }
        while( true ) {
          iVar3 = FUN_0122910c(iVar6,uVar5,&local_1c);
          if (iVar3 == 0) {
            return 0;
          }
          if (uVar5 <= local_1c) {
            return 0;
          }
          if (*(char *)(iVar6 + local_1c) != ',') break;
          local_1c = local_1c + 1;
        }
        if (*(char *)(iVar6 + local_1c) != '}') {
          return 0;
        }
        uVar2 = local_1c + 1;
      }
    } while (uVar2 < uVar5);
  }
  return 1;
}

