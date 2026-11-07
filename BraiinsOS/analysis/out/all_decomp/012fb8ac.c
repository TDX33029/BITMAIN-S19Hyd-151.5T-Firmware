// FUN_012fb8ac @ 012fb8ac size=1500 calls_out=9 calls_in=2
// strings: 

void FUN_012fb8ac(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int local_30;
  undefined1 local_2c;
  byte bStack_2b;
  ushort uStack_2a;
  byte local_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  
LAB_012fb90c:
  do {
    if (*(int *)(param_3 + 0x38) == *(int *)(param_3 + 0x3c)) {
      FUN_0132e9b8(&local_30,param_3);
      if (local_30 != 4) {
        *param_1 = local_30;
        param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
        *(char *)((int)param_1 + 7) = (char)(uStack_2a >> 8);
        *(undefined1 *)(param_1 + 1) = local_2c;
        *(short *)((int)param_1 + 5) =
             (short)(CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c)) >> 8);
        return;
      }
      if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x38)) {
        *param_1 = 4;
        return;
      }
    }
    FUN_0129a648(&local_30,param_3);
    iVar2 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
    uVar4 = (uint)local_28;
    if (local_30 != 4) {
      *(undefined1 *)((int)param_1 + 0xb) = uStack_25;
      *(undefined2 *)((int)param_1 + 9) = uStack_27;
      *(byte *)(param_1 + 2) = local_28;
      *param_1 = local_30;
      param_1[1] = iVar2;
      return;
    }
    puVar5 = &switchD_012fb970::switchdataD_012fb974;
    switch(iVar2) {
    case 1:
      if (uVar4 != 2) {
LAB_012fbea8:
        bStack_2b = local_28;
        local_2c = 1;
        local_30 = 1;
        goto LAB_012fbeb8;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined1 *)(param_2 + 0xc) = 1;
      iVar2 = param_2;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x2b:
switchD_012fb970_caseD_2:
      FUN_01337f28(&local_30,iVar2,uVar4,param_3,param_2 + 0xb0);
      goto joined_r0x012fba9c;
    case 8:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x1c) = 1;
      iVar2 = param_2 + 0x10;
      break;
    case 9:
      if (uVar4 == 0) {
        FUN_0132e394(&local_30,param_3);
        uVar1 = uStack_2a;
        uVar4 = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
        if (local_30 == 4) {
          if (uVar4 - 1 < 3) {
            *(undefined1 *)(param_2 + 0xc1) = local_2c;
          }
          else {
            iVar2 = FUN_013353bc(param_2 + 0xb0,9);
            iVar7 = *(int *)(iVar2 + 0x20);
            if (iVar7 == *(int *)(iVar2 + 0x18)) {
              FUN_0132f4a4(iVar2 + 0x18);
            }
            puVar5 = (uint *)(*(int *)(iVar2 + 0x1c) + iVar7 * 8);
            *puVar5 = uVar4;
            puVar5[1] = (int)(short)uVar1 >> 0xf;
            *(int *)(iVar2 + 0x20) = iVar7 + 1;
          }
          goto LAB_012fb90c;
        }
        puVar5 = (uint *)CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
        uVar3 = CONCAT11(bStack_2b,local_2c) & 0xff;
        uVar4 = uVar4 >> 8;
        uVar6 = (uint)uStack_2a << 0x10;
      }
      else {
        uVar3 = 1;
        uVar6 = 0;
        local_30 = 1;
      }
      *param_1 = local_30;
      param_1[1] = uVar6 | (uVar4 & 0xff) << 8 | uVar3;
      param_1[2] = (int)puVar5;
      return;
    case 10:
      if (uVar4 != 0) {
LAB_012fbecc:
        *(byte *)((int)param_1 + 5) = local_28;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 1;
        return;
      }
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xb8) = local_2c;
      goto LAB_012fb90c;
    case 0xb:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      iVar2 = param_2 + 0x20;
      break;
    case 0x10:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xbb) = local_2c;
      goto LAB_012fb90c;
    case 0x11:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xbc) = local_2c;
      goto LAB_012fb90c;
    case 0x12:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xbd) = local_2c;
      goto LAB_012fb90c;
    case 0x14:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xb9) = local_2c;
      goto LAB_012fb90c;
    case 0x17:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xbf) = local_2c;
      goto LAB_012fb90c;
    case 0x1b:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xba) = local_2c;
      goto LAB_012fb90c;
    case 0x1f:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) goto LAB_012fbee4;
      *(undefined1 *)(param_2 + 0xc0) = local_2c;
      goto LAB_012fb90c;
    case 0x24:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined1 *)(param_2 + 0x3c) = 1;
      iVar2 = param_2 + 0x30;
      break;
    case 0x25:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x48) = 0;
      *(undefined1 *)(param_2 + 0x4c) = 1;
      iVar2 = param_2 + 0x40;
      break;
    case 0x27:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x58) = 0;
      *(undefined1 *)(param_2 + 0x5c) = 1;
      iVar2 = param_2 + 0x50;
      break;
    case 0x28:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x68) = 0;
      *(undefined1 *)(param_2 + 0x6c) = 1;
      iVar2 = param_2 + 0x60;
      break;
    case 0x29:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x78) = 0;
      *(undefined1 *)(param_2 + 0x7c) = 1;
      iVar2 = param_2 + 0x70;
      break;
    case 0x2a:
      if (uVar4 != 0) goto LAB_012fbecc;
      FUN_0132d400(&local_30,param_3);
      if (local_30 != 4) {
LAB_012fbee4:
        param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
        *(uint *)((int)param_1 + 5) = CONCAT13(local_28,CONCAT21(uStack_2a,bStack_2b));
        *(undefined1 *)(param_1 + 1) = local_2c;
        *param_1 = local_30;
        return;
      }
      *(undefined1 *)(param_2 + 0xbe) = local_2c;
      goto LAB_012fb90c;
    case 0x2c:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x88) = 0;
      *(undefined1 *)(param_2 + 0x8c) = 1;
      iVar2 = param_2 + 0x80;
      break;
    case 0x2d:
      if (uVar4 != 2) goto LAB_012fbea8;
      *(undefined4 *)(param_2 + 0x98) = 0;
      *(undefined1 *)(param_2 + 0x9c) = 1;
      iVar2 = param_2 + 0x90;
      break;
    default:
      if (iVar2 != 999) goto switchD_012fb970_caseD_2;
      FUN_01338e78(&local_30,uVar4,param_3,param_2 + 0xa0);
      goto joined_r0x012fba9c;
    }
    FUN_0132e8a8(&local_30,param_3,iVar2);
joined_r0x012fba9c:
    if (local_30 != 4) {
LAB_012fbeb8:
      *param_1 = local_30;
      param_1[1] = CONCAT22(uStack_2a,CONCAT11(bStack_2b,local_2c));
      param_1[2] = CONCAT13(uStack_25,CONCAT21(uStack_27,local_28));
      return;
    }
  } while( true );
}

