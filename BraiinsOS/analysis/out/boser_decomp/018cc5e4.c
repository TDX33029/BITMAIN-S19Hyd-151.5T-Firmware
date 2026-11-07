// FUN_018cc5e4 @ 018cc5e4 size=224 calls_out=2 calls_in=3
// strings: 

void FUN_018cc5e4(undefined1 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  
  switch(param_2) {
  case 0:
  case 1:
    uVar1 = 0;
    break;
  case 2:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
switchD_018cc604_caseD_2:
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar2 = 1;
    puVar2[1] = 1;
    uVar3 = 10;
    *(undefined1 *)(puVar2 + 2) = param_2;
    *(undefined4 *)(param_1 + 4) = 10;
    *(undefined4 **)(param_1 + 8) = puVar2;
    *(undefined **)(param_1 + 0xc) = &DAT_01d22c88;
    goto LAB_018cc71c;
  case 3:
  case 9:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = 7;
    break;
  case 5:
    uVar1 = 2;
    break;
  case 6:
    uVar1 = 3;
    break;
  case 0xd:
switchD_018cc604_caseD_d:
    uVar1 = 0;
    goto LAB_018cc6c0;
  case 0xe:
switchD_018cc604_caseD_e:
    uVar1 = 6;
    break;
  case 0xf:
    uVar1 = 3;
LAB_018cc6c0:
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar3 = 0xc;
    goto LAB_018cc71c;
  default:
    switch(param_2) {
    case 0x1b:
      uVar1 = 5;
      break;
    default:
      goto switchD_018cc604_caseD_2;
    case 0x22:
    case 0x24:
      goto switchD_018cc604_caseD_d;
    case 0x23:
    case 0x25:
      goto switchD_018cc604_caseD_e;
    }
  }
  uVar3 = 10;
  *(undefined4 *)(param_1 + 4) = uVar1;
LAB_018cc71c:
  *param_1 = uVar3;
  return;
}

