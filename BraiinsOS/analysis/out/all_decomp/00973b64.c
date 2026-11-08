// FUN_00973b64 @ 00973b64 size=1548 calls_out=5 calls_in=0
// strings: 

void FUN_00973b64(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    param_1[6] = 0x63bc6100;
    param_1[7] = -0x6b0712a7;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[1] = *param_1;
    param_1[4] = (int)&DAT_80000010;
    param_1[0xe] = *param_1 + 8;
  case '\x03':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x80000000;
    *(undefined2 *)(param_1 + 5) = 0xedd3;
    param_1[0xe] = param_1[1] + 8;
  case '\x04':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = (int)&DAT_8000000c;
    param_1[5] = 0x630e956e;
    param_1[0xe] = param_1[1] + 8;
  case '\x05':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = (int)&DAT_80000008;
    *(undefined2 *)(param_1 + 5) = 0xacd3;
    param_1[0xe] = param_1[1] + 8;
  case '\x06':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x6b42ecb6;
    param_1[0xe] = param_1[1] + 8;
  case '\a':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    param_1[6] = -0x5d3c0a3c;
    param_1[7] = 0x53c7066;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = (int)&DAT_80000010;
    param_1[0xe] = param_1[1] + 8;
  case '\b':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x3334a577;
    param_1[0xe] = param_1[1] + 8;
  case '\t':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 5) = 0xcb;
    param_1[4] = (int)&DAT_80000004;
    param_1[0xe] = param_1[1] + 8;
  case '\n':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = 0x4ee1a146;
    param_1[0xe] = param_1[1] + 8;
  case '\v':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0xb9e;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\f':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = (int)&DAT_8000000c;
    param_1[5] = 0x7b1da542;
    param_1[0xe] = param_1[1] + 8;
  case '\r':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x48df;
    param_1[4] = (int)&DAT_80000008;
    param_1[0xe] = param_1[1] + 8;
  case '\x0e':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x10202635;
    param_1[0xe] = param_1[1] + 8;
  case '\x0f':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 5) = 0x9d;
    param_1[4] = (int)&DAT_80000004;
    param_1[0xe] = param_1[1] + 8;
  case '\x10':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x172b132b;
    param_1[0xe] = param_1[1] + 8;
  case '\x11':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = (int)&DAT_8000000c;
    param_1[5] = -0x1e378ccd;
    param_1[0xe] = param_1[1] + 8;
  case '\x12':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x5327;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\x13':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    param_1[6] = -0x71f068bb;
    param_1[7] = -0x19cc5072;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = (int)&DAT_80000010;
    param_1[0xe] = param_1[1] + 8;
  case '\x14':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x5f06f07a;
    param_1[0xe] = param_1[1] + 8;
  case '\x15':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x1c00932f;
    param_1[0xe] = param_1[1] + 8;
  case '\x16':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x5445d8e4;
    param_1[0xe] = param_1[1] + 8;
  case '\x17':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x8d31;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\x18':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x79bd;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\x19':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0xa3e;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\x1a':
    FUN_009745b0(param_1 + 4);
    FUN_0096f510(param_1 + 4);
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00f370cc(param_1[1]);
    }
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875f88);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875f88);
  }
}

