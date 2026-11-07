// FUN_01333f8c @ 01333f8c size=1124 calls_out=1 calls_in=1
// strings: 

void FUN_01333f8c(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == 0) {
    return;
  }
  do {
    bVar1 = *param_1;
    uVar6 = (uint)bVar1;
    switch(uVar6) {
    case 9:
      iVar2 = param_3[2];
      if ((uint)(*param_3 - iVar2) < 2) {
        FUN_0132f8cc(param_3,iVar2,2,1,1);
        iVar2 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar2) = 0x745c;
      break;
    case 10:
      iVar2 = param_3[2];
      if ((uint)(*param_3 - iVar2) < 2) {
        FUN_0132f8cc(param_3,iVar2,2,1,1);
        iVar2 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar2) = 0x6e5c;
      break;
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
switchD_01333ffc_caseD_b:
      iVar5 = param_3[2];
      iVar4 = iVar5;
      if (*param_3 == iVar5) {
        FUN_0132f8cc(param_3,iVar5,1,1,1);
        iVar4 = param_3[2];
      }
      iVar3 = param_3[1];
      iVar2 = iVar5 + 1;
      if (uVar6 - 0x20 < 0x5f) {
        *(byte *)(iVar3 + iVar4) = bVar1;
      }
      else {
        iVar7 = *param_3;
        *(undefined1 *)(iVar3 + iVar4) = 0x5c;
        param_3[2] = iVar2;
        if (iVar7 == iVar2) {
          FUN_0132f8cc(param_3,iVar2,1,1,1);
          iVar7 = *param_3;
          iVar3 = param_3[1];
          iVar2 = param_3[2];
        }
        *(byte *)(iVar3 + iVar2) = bVar1 >> 6 | 0x30;
        iVar2 = iVar5 + 2;
        param_3[2] = iVar2;
        if (iVar7 == iVar2) {
          FUN_0132f8cc(param_3,iVar7,1,1,1);
          iVar2 = param_3[2];
          iVar3 = param_3[1];
        }
        *(byte *)(iVar3 + iVar2) = bVar1 >> 3 & 7 | 0x30;
        iVar2 = iVar5 + 3;
        param_3[2] = iVar2;
        if (*param_3 == iVar2) {
          FUN_0132f8cc(param_3,iVar2,1,1,1);
          iVar2 = param_3[2];
        }
        *(byte *)(param_3[1] + iVar2) = bVar1 & 7 | 0x30;
        iVar2 = iVar5 + 4;
      }
      goto LAB_01333fd8;
    case 0xd:
      iVar2 = param_3[2];
      if ((uint)(*param_3 - iVar2) < 2) {
        FUN_0132f8cc(param_3,iVar2,2,1,1);
        iVar2 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar2) = 0x725c;
      break;
    case 0x22:
      iVar2 = param_3[2];
      if ((uint)(*param_3 - iVar2) < 2) {
        FUN_0132f8cc(param_3,iVar2,2,1,1);
        iVar2 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar2) = 0x225c;
      break;
    case 0x27:
      iVar2 = param_3[2];
      if ((uint)(*param_3 - iVar2) < 2) {
        FUN_0132f8cc(param_3,iVar2,2,1,1);
        iVar2 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar2) = 0x275c;
      break;
    default:
      if (uVar6 != 0x5c) goto switchD_01333ffc_caseD_b;
      iVar2 = param_3[2];
      if ((uint)(*param_3 - iVar2) < 2) {
        FUN_0132f8cc(param_3,iVar2,2,1,1);
        iVar2 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + iVar2) = 0x5c5c;
    }
    iVar2 = iVar2 + 2;
LAB_01333fd8:
    param_2 = param_2 + -1;
    param_3[2] = iVar2;
    param_1 = param_1 + 1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}

