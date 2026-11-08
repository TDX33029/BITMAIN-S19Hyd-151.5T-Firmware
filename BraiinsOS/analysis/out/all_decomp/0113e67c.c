// FUN_0113e67c @ 0113e67c size=408 calls_out=0 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x0113e770) */
/* WARNING: Removing unreachable block (ram,0x0113e7a8) */

void FUN_0113e67c(undefined1 *param_1,int param_2,byte param_3,undefined1 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_18;
  
  if (0x11 < param_3 - 199) {
switchD_0113e6a4_caseD_ca:
    param_1[2] = param_4;
    param_1[1] = param_3;
    *param_1 = 2;
    return;
  }
  uVar5 = 1;
  switch(param_3) {
  case 199:
    if (*(int *)(param_2 + 0xc) == 0) {
LAB_0113e814:
      *param_1 = 1;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar5 = (uint)**(byte **)(param_2 + 8);
    *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    break;
  case 200:
    uVar5 = *(uint *)(param_2 + 0xc);
    puVar2 = *(ushort **)(param_2 + 8);
    if (uVar5 < 2) {
      *(uint *)(param_2 + 8) = (int)puVar2 + uVar5;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113e814;
    }
    uVar1 = *puVar2;
    *(ushort **)(param_2 + 8) = puVar2 + 1;
    *(uint *)(param_2 + 0xc) = uVar5 - 2;
    uVar5 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
    break;
  case 0xc9:
    uVar5 = *(uint *)(param_2 + 0xc);
    puVar3 = *(uint **)(param_2 + 8);
    if (uVar5 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar3 + uVar5;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      *(undefined4 *)(param_1 + 0xc) = local_18;
      *param_1 = 1;
      return;
    }
    uVar4 = *puVar3;
    *(uint **)(param_2 + 8) = puVar3 + 1;
    *(uint *)(param_2 + 0xc) = uVar5 - 4;
    uVar5 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18;
    break;
  default:
    goto switchD_0113e6a4_caseD_ca;
  case 0xd4:
    break;
  case 0xd5:
    uVar5 = 2;
    break;
  case 0xd6:
    uVar5 = 4;
    break;
  case 0xd7:
    uVar5 = 8;
    break;
  case 0xd8:
    uVar5 = 0x10;
  }
  *(uint *)(param_1 + 4) = uVar5;
  *param_1 = 9;
  return;
}

