// FUN_0104f1e0 @ 0104f1e0 size=368 calls_out=4 calls_in=8
// strings: the index passed to BinDecoder::slice_from must be greater than the decoder positionassertion failed: len <= u16::MAX as usize | unexpected end of input reached

int FUN_0104f1e0(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined2 uVar2;
  char unaff_r4;
  uint uVar3;
  int in_r12;
  undefined4 local_50;
  char *local_4c;
  uint local_48;
  int local_44;
  
  local_4c = (char *)param_4;
  switch(*param_1) {
  case '\x02':
    local_4c = (char *)(uint)*(ushort *)(param_1 + 2);
    uVar2 = 0xd;
    param_1 = *(char **)(param_1 + 4);
    local_48 = 0;
    break;
  case '\x03':
    uVar2 = 0xc;
    goto LAB_0104f260;
  case '\x04':
    unaff_r4 = param_1[1];
    uVar2 = 0x1c;
    local_48 = 0;
    break;
  case '\x05':
    uVar2 = 8;
LAB_0104f260:
    param_1 = *(char **)(param_1 + 4);
    local_48 = 0;
    break;
  case '\x06':
    local_4c = *(char **)(param_1 + 8);
    uVar2 = 6;
    param_1 = *(char **)(param_1 + 4);
    local_48 = (uint)local_4c & 0xffff0000;
    break;
  default:
    local_48 = 0;
    local_4c = (char *)0x1;
    local_50 = (char *)0x0;
    if (*param_1 == '\0') {
      FUN_0104e980(&local_50,0,0x1f,1,1);
      uVar3 = local_48;
      FUN_016dd1aa((int)local_4c + local_48,"unexpected end of input reached",0x1f);
      in_r12 = uVar3 + 0x1f;
    }
    else {
      FUN_0104e980(&local_50,0,0x54,1,1);
      uVar3 = local_48;
      FUN_016dd1aa((int)local_4c + local_48,
                   "the index passed to BinDecoder::slice_from must be greater than the decoder positionassertion failed: len <= u16::MAX as usize"
                   ,0x54);
      in_r12 = uVar3 + 0x54;
    }
    unaff_r4 = (char)uVar3;
    uVar2 = 0x11;
    local_48 = (uint)local_4c & 0xffff0000;
    param_1 = local_50;
  }
  local_48 = local_48 | (uint)local_4c & 0xffff;
  local_50 = (char *)CONCAT22(CONCAT11(local_50._3_1_,unaff_r4),uVar2);
  local_4c = param_1;
  local_44 = in_r12;
  iVar1 = thunk_FUN_016d4a50(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar1,&local_50,0x44);
  return iVar1;
}

