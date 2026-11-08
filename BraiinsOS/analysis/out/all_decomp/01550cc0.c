// FUN_01550cc0 @ 01550cc0 size=552 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01550cc0(ushort *param_1,int param_2,undefined1 *param_3,int param_4,ushort *param_5)

{
  int iVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  bool bVar8;
  
  if (param_4 != 0) {
    if (param_2 == 0) {
      puVar2 = (ushort *)(param_3 + 0x10);
      param_4 = param_4 * 0x14;
      do {
        uVar7 = 0xb;
        uVar6 = (&switchD_01550e6c::switchdataD_01550e70)[(byte)puVar2[-8]];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((byte)puVar2[-8]) {
        case 1:
          uVar7 = 0;
          break;
        case 2:
          uVar7 = 0x17;
          break;
        case 3:
          uVar7 = 0x26;
          break;
        case 4:
          uVar7 = 0x10;
          break;
        case 5:
          uVar7 = 0x22;
          break;
        case 6:
          uVar7 = 0x18;
          break;
        case 7:
          uVar7 = 0x15;
          break;
        case 8:
          uVar7 = 5;
          break;
        case 9:
          uVar7 = 0x13;
          break;
        case 10:
          uVar7 = 0x12;
          break;
        case 0xb:
          uVar7 = 0x1a;
          break;
        case 0xc:
          uVar7 = 0x23;
          break;
        case 0xd:
          uVar7 = 0x27;
          break;
        case 0xe:
          uVar7 = 0x19;
          break;
        case 0xf:
          uVar7 = 0x28;
          break;
        case 0x10:
          uVar7 = *puVar2;
          if (uVar7 != 0x2a) break;
          uVar5 = (uint)*param_5;
          bVar8 = uVar5 == 0x2a;
          if (bVar8) {
            uVar5 = (uint)puVar2[1];
            uVar6 = (uint)param_5[1];
          }
          if (!bVar8 || uVar6 != uVar5) {
            return 1;
          }
          goto LAB_01550f5c;
        }
        if (*param_5 != uVar7) {
          return 1;
        }
LAB_01550f5c:
        puVar2 = puVar2 + 10;
        param_4 = param_4 + -0x14;
      } while (param_4 != 0);
    }
    else {
      puVar3 = param_3;
      do {
        puVar4 = puVar3 + 0x14;
        uVar7 = 0xb;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*puVar3) {
        case 1:
          uVar7 = 0;
          break;
        case 2:
          uVar7 = 0x17;
          break;
        case 3:
          uVar7 = 0x26;
          break;
        case 4:
          uVar7 = 0x10;
          break;
        case 5:
          uVar7 = 0x22;
          break;
        case 6:
          uVar7 = 0x18;
          break;
        case 7:
          uVar7 = 0x15;
          break;
        case 8:
          uVar7 = 5;
          break;
        case 9:
          uVar7 = 0x13;
          break;
        case 10:
          uVar7 = 0x12;
          break;
        case 0xb:
          uVar7 = 0x1a;
          break;
        case 0xc:
          uVar7 = 0x23;
          break;
        case 0xd:
          uVar7 = 0x27;
          break;
        case 0xe:
          uVar7 = 0x19;
          break;
        case 0xf:
          uVar7 = 0x28;
          break;
        case 0x10:
          uVar7 = *(ushort *)(puVar3 + 0x10);
          if (uVar7 != 0x2a) break;
          iVar1 = param_2 << 2;
          puVar2 = param_1 + 1;
          do {
            uVar7 = puVar2[-1];
            bVar8 = uVar7 == 0x2a;
            if (bVar8) {
              uVar7 = *puVar2;
            }
            if (bVar8 && uVar7 == *(ushort *)(puVar3 + 0x12)) goto LAB_01550cf0;
            puVar2 = puVar2 + 2;
            iVar1 = iVar1 + -4;
          } while (iVar1 != 0);
          uVar7 = *param_5;
          bVar8 = uVar7 == 0x2a;
          if (bVar8) {
            uVar7 = param_5[1];
          }
          if (!bVar8 || uVar7 != *(ushort *)(puVar3 + 0x12)) {
            return 1;
          }
          goto LAB_01550cf0;
        }
        iVar1 = param_2 << 2;
        puVar2 = param_1;
        do {
          if (*puVar2 == uVar7) goto LAB_01550cf0;
          puVar2 = puVar2 + 2;
          iVar1 = iVar1 + -4;
        } while (iVar1 != 0);
        if (*param_5 != uVar7) {
          return 1;
        }
LAB_01550cf0:
        puVar3 = puVar4;
      } while (puVar4 != param_3 + param_4 * 0x14);
    }
  }
  return 0;
}

