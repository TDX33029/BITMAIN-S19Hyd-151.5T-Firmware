// FUN_013e677c @ 013e677c size=320 calls_out=3 calls_in=11
// strings: the index passed to BinDecoder::slice_from must be greater than the decoder position | unexpected end of input reached

void FUN_013e677c(char *param_1)

{
  int iVar1;
  undefined2 local_5c;
  char local_5a;
  undefined4 local_58;
  int local_54;
  int iStack_50;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  switch(*param_1) {
  case '\x02':
    local_58 = *(undefined4 *)(param_1 + 4);
    local_5c = 0xd;
    local_54 = CONCAT22(local_54._2_2_,*(undefined2 *)(param_1 + 2));
    break;
  case '\x03':
    local_58 = *(undefined4 *)(param_1 + 4);
    local_5c = 0xc;
    break;
  case '\x04':
    local_5a = param_1[1];
    local_5c = 0x1c;
    break;
  case '\x05':
    local_58 = *(undefined4 *)(param_1 + 4);
    local_5c = 8;
    break;
  case '\x06':
    local_58 = *(undefined4 *)(param_1 + 4);
    local_54 = *(int *)(param_1 + 8);
    local_5c = 6;
    break;
  default:
    local_10 = 0;
    local_14 = 1;
    local_18 = 0;
    if (*param_1 == '\0') {
      FUN_01af7b44(&local_18,0,0x1f,1,1);
      iVar1 = local_10;
      FUN_01bed4e2(local_14 + local_10,"unexpected end of input reached",0x1f);
      iStack_50 = iVar1 + 0x1f;
    }
    else {
      FUN_01af7b44(&local_18,0,0x54,1,1);
      iVar1 = local_10;
      FUN_01bed4e2(local_14 + local_10,
                   "the index passed to BinDecoder::slice_from must be greater than the decoder position"
                   ,0x54);
      iStack_50 = iVar1 + 0x54;
    }
    local_58 = local_18;
    local_54 = local_14;
    local_5c = 0x11;
    local_10 = iStack_50;
  }
  FUN_013e649c(&local_5c);
  return;
}

