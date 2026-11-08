// FUN_0102e79c @ 0102e79c size=620 calls_out=2 calls_in=8
// strings: a Display implementation returned an error unexpectedly

void FUN_0102e79c(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar2 = 0x22;
    switch(*(undefined4 *)(param_2 + 4)) {
    case 1:
    case 0xd:
      uVar2 = 1;
      break;
    case 2:
      uVar2 = 0;
      break;
    default:
      uVar2 = 0x29;
      break;
    case 4:
      uVar2 = 0x23;
      break;
    case 7:
      break;
    case 0xb:
      uVar2 = 0xd;
      break;
    case 0xc:
      uVar2 = 0x26;
      break;
    case 0x10:
      uVar2 = 0x1c;
      break;
    case 0x11:
      uVar2 = 0xc;
      break;
    case 0x12:
      uVar2 = 0x1f;
      break;
    case 0x14:
      uVar2 = 0xe;
      break;
    case 0x15:
      uVar2 = 0xf;
      break;
    case 0x16:
      uVar2 = 0x14;
      break;
    case 0x1a:
      uVar2 = 0x1d;
      break;
    case 0x1b:
      uVar2 = 0x1b;
      break;
    case 0x1c:
      uVar2 = 0x18;
      break;
    case 0x1d:
      uVar2 = 0x19;
      break;
    case 0x1e:
      uVar2 = 0x11;
      break;
    case 0x1f:
      uVar2 = 0x20;
      break;
    case 0x20:
      uVar2 = 0xb;
      break;
    case 0x23:
      uVar2 = 0x1e;
      break;
    case 0x24:
      uVar2 = 0x21;
      break;
    case 0x26:
    case 0x5f:
      uVar2 = 0x24;
      break;
    case 0x27:
      uVar2 = 0x10;
      break;
    case 0x28:
      uVar2 = 0x12;
      break;
    case 0x62:
      uVar2 = 8;
      break;
    case 99:
      uVar2 = 9;
      break;
    case 100:
      uVar2 = 10;
      break;
    case 0x65:
      uVar2 = 5;
      break;
    case 0x67:
      uVar2 = 6;
      break;
    case 0x68:
      uVar2 = 3;
      break;
    case 0x6b:
      uVar2 = 7;
      break;
    case 0x6e:
      uVar2 = 0x16;
      break;
    case 0x6f:
      uVar2 = 2;
      break;
    case 0x71:
      uVar2 = 4;
      break;
    case 0x73:
      uVar2 = 0x27;
      break;
    case 0x74:
      uVar2 = 0x13;
      break;
    case 0x7a:
      uVar2 = 0x1a;
    }
    break;
  case 1:
    uVar2 = param_2[1];
    break;
  case 2:
    uVar2 = *(undefined1 *)(*(int *)(param_2 + 4) + 8);
    break;
  case 3:
    puVar4 = *(undefined4 **)(param_2 + 4);
    uVar2 = *(undefined1 *)(puVar4 + 2);
    local_3c = 1;
    local_34 = &local_40;
    local_38 = 0;
    local_40 = 0;
    local_28 = 0;
    local_30 = &DAT_01883078;
    local_2c = &DAT_60000020;
    iVar1 = (**(code **)(puVar4[1] + 0x10))(*puVar4,&local_34);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_21,
                   &DAT_01883090,&DAT_018af130);
    }
    uVar5 = *puVar4;
    puVar6 = (undefined4 *)puVar4[1];
    pcVar3 = (code *)*puVar6;
    *(undefined4 *)(param_1 + 4) = local_40;
    *(undefined4 *)(param_1 + 8) = local_3c;
    *(undefined4 *)(param_1 + 0xc) = local_38;
    param_1[1] = uVar2;
    *param_1 = 2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    thunk_FUN_016d3fb4(puVar4);
    return;
  }
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 4) = 0x80000000;
  *param_1 = 2;
  return;
}

