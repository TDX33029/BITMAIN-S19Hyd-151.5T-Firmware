// FUN_018eb1e0 @ 018eb1e0 size=312 calls_out=4 calls_in=2
// strings: 

void FUN_018eb1e0(int *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  
  if (*param_1 != -0x80000000) {
    iVar4 = param_1[1];
    uVar5 = param_1[2];
    local_20 = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
    FUN_01ac6cbc(param_2,&local_20,2);
    FUN_01ac6cbc(param_2,iVar4,uVar5);
    iVar4 = param_1[4];
    uVar5 = param_1[5];
    local_1e = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
    FUN_01ac6cbc(param_2,&local_1e,2);
    FUN_01ac6cbc(param_2,iVar4,uVar5);
    iVar4 = param_1[7];
    uVar5 = param_1[8];
    local_1c = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
    FUN_01ac6cbc(param_2,&local_1c,2);
    FUN_01ac6cbc(param_2,iVar4,uVar5);
    return;
  }
  uVar3 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[5]) {
  case '\x01':
    uVar3 = 2;
    break;
  case '\x02':
    uVar3 = 3;
    break;
  case '\x03':
    uVar3 = *(undefined1 *)((int)param_1 + 0x15);
  }
  iVar4 = param_2[2];
  if (iVar4 == *param_2) {
    FUN_006666a0(param_2);
  }
  uVar1 = *(undefined2 *)((int)param_1 + 0x12);
  iVar2 = param_1[4];
  *(undefined1 *)(param_2[1] + iVar4) = uVar3;
  param_2[2] = iVar4 + 1;
  uVar5 = FUN_0190abbc((short)iVar2,uVar1);
  local_1a = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
  FUN_01ac6cbc(param_2,&local_1a,2);
  FUN_01935d5c(param_1[2],param_1[3],param_2);
  return;
}

