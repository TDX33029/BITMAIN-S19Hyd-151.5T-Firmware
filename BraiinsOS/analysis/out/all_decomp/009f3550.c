// FUN_009f3550 @ 009f3550 size=184 calls_out=1 calls_in=1
// strings: 

void FUN_009f3550(int *param_1,uint param_2,undefined1 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 unaff_r5;
  int iVar3;
  uint uVar4;
  uint in_r12;
  int iVar5;
  bool bVar6;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 auStack_28 [16];
  
  local_40 = *param_1;
  if (local_40 != 0) {
    iVar5 = param_1[1];
    do {
      iVar3 = (uint)*(ushort *)(local_40 + 0x5e) << 3;
      uVar4 = 0;
      do {
        uVar2 = uVar4;
        in_r12 = (uint)*(ushort *)(local_40 + 0x5e);
        if (iVar3 == 0) goto LAB_009f35b8;
        uVar4 = *(uint *)(local_40 + uVar2 * 8);
        iVar3 = iVar3 + -8;
        bVar6 = param_2 < uVar4;
        bVar1 = !bVar6 && param_2 != uVar4;
        uVar4 = uVar2 + 1;
      } while ((char)(bVar1 - bVar6) == '\x01');
      if (bVar1 == bVar6) {
        return;
      }
      in_r12 = uVar2;
LAB_009f35b8:
      if (iVar5 == 0) goto LAB_009f3600;
      iVar5 = iVar5 + -1;
      local_40 = *(int *)(local_40 + in_r12 * 4 + 0x60);
    } while( true );
  }
  local_40 = 0;
LAB_009f35d4:
  local_3c = unaff_r5;
  local_38 = in_r12;
  local_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  FUN_009f3608(auStack_28,&local_40);
  return;
LAB_009f3600:
  unaff_r5 = 0;
  goto LAB_009f35d4;
}

