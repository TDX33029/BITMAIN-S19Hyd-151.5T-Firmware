// FUN_01386464 @ 01386464 size=588 calls_out=2 calls_in=13
// strings: 

void FUN_01386464(undefined1 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 local_38;
  uint *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  bVar1 = *param_2;
  puVar4 = (uint *)(&switchD_0138647c::switchdataD_01386480)[bVar1];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    puVar5 = *(undefined4 **)(param_2 + 4);
    bVar6 = 0x22;
    uVar3 = 0x80000000;
    switch(puVar5) {
    case (undefined4 *)0x1:
    case (undefined4 *)0xd:
      bVar6 = 1;
      break;
    case (undefined4 *)0x2:
      bVar6 = 0;
      break;
    case (undefined4 *)0x3:
    case (undefined4 *)0x5:
    case (undefined4 *)0x6:
    case (undefined4 *)0x8:
    case (undefined4 *)0x9:
    case (undefined4 *)0xa:
    case (undefined4 *)0xe:
    case (undefined4 *)0xf:
    case (undefined4 *)0x13:
    case (undefined4 *)0x17:
    case (undefined4 *)0x18:
    case (undefined4 *)0x19:
    case (undefined4 *)0x21:
    case (undefined4 *)0x22:
    case (undefined4 *)0x25:
switchD_013864b0_caseD_3:
      uVar3 = 0x80000000;
      bVar6 = 0x29;
      break;
    case (undefined4 *)0x4:
      bVar6 = 0x23;
      break;
    case (undefined4 *)0x7:
      break;
    case (undefined4 *)0xb:
      bVar6 = 0xd;
      break;
    case (undefined4 *)0xc:
      bVar6 = 0x26;
      break;
    case (undefined4 *)0x10:
      bVar6 = 0x1c;
      break;
    case (undefined4 *)0x11:
      bVar6 = 0xc;
      break;
    case (undefined4 *)0x12:
      bVar6 = 0x1f;
      break;
    case (undefined4 *)0x14:
      bVar6 = 0xe;
      break;
    case (undefined4 *)0x15:
      bVar6 = 0xf;
      break;
    case (undefined4 *)0x16:
      bVar6 = 0x14;
      break;
    case (undefined4 *)0x1a:
      bVar6 = 0x1d;
      break;
    case (undefined4 *)0x1b:
      bVar6 = 0x1b;
      break;
    case (undefined4 *)0x1c:
      bVar6 = 0x18;
      break;
    case (undefined4 *)0x1d:
      bVar6 = 0x19;
      break;
    case (undefined4 *)0x1e:
      bVar6 = 0x11;
      break;
    case (undefined4 *)0x1f:
      bVar6 = 0x20;
      break;
    case (undefined4 *)0x20:
      bVar6 = 0xb;
      break;
    case (undefined4 *)0x23:
      bVar6 = 0x1e;
      break;
    case (undefined4 *)0x24:
      bVar6 = 0x21;
      break;
    case (undefined4 *)0x26:
switchD_013864b0_caseD_26:
      uVar3 = 0x80000000;
      bVar6 = 0x24;
      break;
    case (undefined4 *)0x27:
      bVar6 = 0x10;
      break;
    case (undefined4 *)0x28:
      bVar6 = 0x12;
      break;
    default:
      puVar4 = &switchD_01386614::switchdataD_01386618;
      uVar3 = 0x80000000;
      switch(puVar5) {
      case (undefined4 *)0x5f:
        goto switchD_013864b0_caseD_26;
      default:
        goto switchD_013864b0_caseD_3;
      case (undefined4 *)0x62:
        bVar6 = 8;
        break;
      case (undefined4 *)0x63:
        bVar6 = 9;
        break;
      case (undefined4 *)0x64:
        bVar6 = 10;
        break;
      case (undefined4 *)0x65:
        bVar6 = 5;
        break;
      case (undefined4 *)0x67:
        bVar6 = 6;
        break;
      case (undefined4 *)0x68:
        bVar6 = 3;
        break;
      case (undefined4 *)0x6b:
        bVar6 = 7;
        break;
      case (undefined4 *)0x6e:
        bVar6 = 0x16;
        break;
      case (undefined4 *)0x6f:
        bVar6 = 2;
        break;
      case (undefined4 *)0x71:
        bVar6 = 4;
        break;
      case (undefined4 *)0x73:
        bVar6 = 0x27;
        break;
      case (undefined4 *)0x74:
        bVar6 = 0x13;
        break;
      case (undefined4 *)0x7a:
        bVar6 = 0x1a;
      }
    }
    goto switchD_013864b0_caseD_7;
  case 1:
    puVar5 = *(undefined4 **)(param_2 + 4);
    bVar6 = param_2[1];
    break;
  case 2:
    puVar5 = *(undefined4 **)(param_2 + 4);
    bVar6 = *(byte *)(puVar5 + 2);
    break;
  case 3:
    puVar5 = *(undefined4 **)(param_2 + 4);
    bVar6 = *(byte *)(puVar5 + 2);
    local_34 = (uint *)0x1;
    local_2c = &local_38;
    local_30 = 0;
    local_38 = 0;
    local_20 = 0;
    local_28 = &DAT_01ceb25c;
    local_24 = 0x60000020;
    iVar2 = (**(code **)(puVar5[1] + 0x10))(*puVar5,&local_2c);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_19,&DAT_01ceb274,&DAT_01d30334);
    }
    uVar3 = local_38;
    puVar4 = local_34;
    param_4 = local_30;
    goto switchD_013864b0_caseD_7;
  }
  uVar3 = 0x80000000;
switchD_013864b0_caseD_7:
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(uint **)(param_1 + 8) = puVar4;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *param_1 = 2;
  param_1[1] = bVar6;
  FUN_0069d8a4((uint)bVar1,puVar5);
  return;
}

