// FUN_0167bff0 @ 0167bff0 size=512 calls_out=6 calls_in=1
// strings: 

void FUN_0167bff0(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int *local_40;
  int local_3c;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  
  piVar7 = (int *)*param_2;
  uVar6 = param_2[2];
  uVar1 = *(ushort *)((int)piVar7 + 0x32);
  iVar9 = piVar7[uVar6 + 1];
  FUN_01bed864(piVar7 + uVar6 + 1,piVar7 + uVar6 + 2,((uint)uVar1 + ~uVar6) * 4);
  uVar3 = uVar1 - 1;
  iVar8 = param_2[1];
  *(short *)((int)piVar7 + 0x32) = (short)uVar3;
  if (4 < (uVar3 & 0xffff)) goto LAB_0167c1dc;
  FUN_0167aad0(&local_44,piVar7,iVar8);
  piVar2 = local_2c;
  piVar7 = local_34;
  if (local_44 == 2) {
    local_50 = local_40;
    local_4c = local_3c;
    local_48 = uVar6;
  }
  else {
    uVar3 = (uint)*(ushort *)((int)local_34 + 0x32) + (uint)*(ushort *)((int)local_2c + 0x32) + 1;
    if ((local_44 & 1) == 0) {
      if (uVar3 < 0xc) {
        uVar5 = 1;
        goto LAB_0167c0c4;
      }
      FUN_0167ab74(&local_40,1);
      local_48 = uVar6 + 1;
      local_4c = local_28;
      local_50 = piVar2;
    }
    else if (uVar3 < 0xc) {
      uVar5 = 0;
LAB_0167c0c4:
      FUN_0167bbc0(&local_50,&local_40,uVar5,uVar6);
    }
    else {
      FUN_0167aed8(&local_40,1);
      local_4c = local_30;
      local_50 = piVar7;
      local_48 = uVar6;
    }
  }
  uVar6 = local_48;
  iVar8 = local_4c;
  piVar7 = local_50;
  if (*local_50 != 0) {
    uVar10 = CONCAT44(local_4c + 1,*local_50);
    while( true ) {
      uVar3 = (uint)*(ushort *)((int)uVar10 + 0x32);
      if (4 < uVar3) break;
      FUN_0167aad0(&local_44,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      if (local_44 == 2) {
        if (uVar3 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar4 = (uint)*(ushort *)((int)local_34 + 0x32) + (uint)*(ushort *)((int)local_2c + 0x32) + 1;
      if ((local_44 & 1) == 0) {
        if (0xb < uVar4) {
          FUN_0167ab74(&local_40,5 - uVar3);
          break;
        }
      }
      else if (0xb < uVar4) {
        FUN_0167aed8(&local_40,5 - uVar3);
        break;
      }
      uVar10 = FUN_0167ad3c(&local_40);
      if ((int)uVar10 == 0) break;
    }
  }
LAB_0167c1dc:
  *param_1 = iVar9;
  param_1[1] = (int)piVar7;
  param_1[2] = iVar8;
  param_1[3] = uVar6;
  return;
}

