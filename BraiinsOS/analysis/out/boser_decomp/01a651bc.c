// FUN_01a651bc @ 01a651bc size=308 calls_out=4 calls_in=1
// strings: 

void FUN_01a651bc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 uVar2;
  uint unaff_r10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar4 = CONCAT44(unaff_r9,local_38);
  bVar1 = *(byte *)(param_4 + 0x6c);
  if (8 < bVar1) {
    if (bVar1 == 9) {
      local_32 = *(undefined1 *)(param_4 + 0x6f);
      local_34 = *(undefined2 *)(param_4 + 0x6d);
      unaff_r10 = (uint)*(byte *)(param_4 + 0x7c);
      uVar4 = *(undefined8 *)(param_4 + 0x70);
      unaff_r8 = *(int *)(param_4 + 0x78);
    }
    else {
      unaff_r8 = *(int *)(param_4 + 0x74);
      unaff_r10 = 0;
      if (unaff_r8 < 0) {
LAB_01a65288:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(unaff_r10,unaff_r8);
      }
      uVar2 = *(undefined4 *)(param_4 + 0x70);
      if (unaff_r8 == 0) {
        local_2c = 1;
        local_30 = 0;
      }
      else {
        unaff_r10 = 1;
        local_2c = FUN_01298504(unaff_r8,1);
        local_30 = unaff_r8;
        if (local_2c == 0) goto LAB_01a65288;
      }
      FUN_01bed4e2(local_2c,uVar2,unaff_r8);
      local_28 = unaff_r8;
      uVar4 = FUN_01284400(&local_30);
    }
  }
  local_38 = (undefined4)uVar4;
  uVar3 = (**(code **)(param_3 + 0x14))(param_2);
  FUN_01bed4e2(param_1,param_4,0x90);
  *(undefined4 *)(param_1 + 0xac) = local_38;
  *(undefined1 *)(param_1 + 0xbc) = 1;
  *(byte *)(param_1 + 0xa8) = bVar1;
  *(int *)(param_1 + 0xb0) = (int)((ulonglong)uVar4 >> 0x20);
  *(int *)(param_1 + 0xb4) = unaff_r8;
  *(uint *)(param_1 + 0xb8) = unaff_r10;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xa9) = local_34;
  *(undefined1 *)(param_1 + 0xab) = local_32;
  return;
}

