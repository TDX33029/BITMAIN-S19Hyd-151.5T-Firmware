// FUN_00fe497c @ 00fe497c size=352 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00fe497c(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    pbVar6 = param_1 + param_2;
    do {
      puVar5 = (undefined1 *)(uint)*param_1;
      pbVar1 = param_1 + 1;
      if ((char)*param_1 < '\0') {
        if (puVar5 < (undefined1 *)0xe0) {
          puVar5 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
          param_1 = param_1 + 2;
joined_r0x00fe4bf8:
          pbVar1 = param_1;
          if (puVar5 < &DAT_00000080) goto LAB_00fe49bc;
        }
        else {
          uVar3 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
          if (puVar5 < (undefined1 *)0xf0) {
            puVar5 = (undefined1 *)(uVar3 | ((uint)puVar5 & 0x1f) << 0xc);
            param_1 = param_1 + 3;
            goto joined_r0x00fe4bf8;
          }
          puVar5 = (undefined1 *)(param_1[3] & 0x3f | uVar3 << 6 | ((uint)puVar5 & 7) << 0x12);
          if (puVar5 == &DAT_00110000) break;
          param_1 = param_1 + 4;
          pbVar1 = param_1;
          if (puVar5 < (undefined1 *)0x80) goto LAB_00fe49bc;
        }
        if ((puVar5 <= &DAT_000000a9) ||
           ((iVar2 = FUN_00fb7558(puVar5), iVar2 == 0 &&
            ((puVar5 <= &DAT_000000b1 || (iVar2 = FUN_00fb7a34(puVar5), iVar2 == 0))))))
        goto LAB_00fe49dc;
      }
      else {
LAB_00fe49bc:
        param_1 = pbVar1;
        if (((undefined1 *)0x9 < puVar5 + -0x30) && (0x19 < ((uint)puVar5 & 0x5f) - 0x41)) {
LAB_00fe49dc:
          switch(puVar5) {
          case (undefined1 *)0x21:
          case (undefined1 *)0x23:
          case (undefined1 *)0x24:
          case (undefined1 *)0x25:
          case (undefined1 *)0x26:
          case (undefined1 *)0x27:
          case (undefined1 *)0x2a:
          case (undefined1 *)0x2b:
          case (undefined1 *)0x2d:
          case (undefined1 *)0x2f:
          case (undefined1 *)0x3d:
          case (undefined1 *)0x3f:
          case (undefined1 *)0x5e:
          case (undefined1 *)0x5f:
          case (undefined1 *)0x60:
          case (undefined1 *)0x7b:
          case (undefined1 *)0x7c:
          case (undefined1 *)0x7d:
          case (undefined1 *)0x7e:
            break;
          default:
            uVar3 = (uint)puVar5 >> 8 & 0xff;
            if ((uint)puVar5 >> 0x10 != 0) {
              return 0;
            }
            if (-0x40000001 <
                (int)((int)puVar5 << 0x18 | uVar3 << 0x10 | ((uint)puVar5 >> 0x10) << 8)) {
              return 0;
            }
            if (0x1d < uVar3 - 0xc2) {
              return 0;
            }
          }
        }
      }
    } while (param_1 != pbVar6);
    uVar4 = 1;
  }
  return uVar4;
}

