// FUN_006e7854 @ 006e7854 size=136 calls_out=3 calls_in=0
// strings: 

void FUN_006e7854(byte *param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *param_1;
  cVar2 = '\x03';
  if (0xd < bVar1) {
    cVar2 = bVar1 - 0xe;
  }
  switch(cVar2) {
  case '\0':
    FUN_0185401c(param_1[4],*(undefined4 *)(param_1 + 8));
    return;
  case '\x01':
  case '\x02':
    goto switchD_006e7880_caseD_1;
  case '\x03':
    switch(bVar1) {
    case 0:
    case 1:
    case 7:
      if (*(int *)(param_1 + 4) == -0x80000000) {
        return;
      }
      FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      return;
    default:
      goto switchD_006e7880_default;
    case 4:
    case 5:
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      break;
    case 9:
      break;
    }
switchD_006e7880_caseD_1:
    FUN_01443048(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  default:
switchD_006e7880_default:
    return;
  }
}

