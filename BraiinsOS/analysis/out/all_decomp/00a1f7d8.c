// FUN_00a1f7d8 @ 00a1f7d8 size=1360 calls_out=5 calls_in=0
// strings: 

void FUN_00a1f7d8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x80000000;
    *(undefined2 *)(param_1 + 5) = 0xcec9;
    param_1[1] = *param_1;
    param_1[0xe] = *param_1 + 8;
  case '\x03':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    param_1[6] = -0x5f25ddb2;
    param_1[7] = 0x5ff846da;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffee;
    param_1[0xe] = param_1[1] + 8;
  case '\x04':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x79323060;
    param_1[0xe] = param_1[1] + 8;
  case '\x05':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x6e1b;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\x06':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0xc522;
    param_1[4] = -0x7ffffff6;
    param_1[0xe] = param_1[1] + 8;
  case '\a':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x584;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\b':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7ffffff2;
    param_1[5] = -0x537a415c;
    param_1[0xe] = param_1[1] + 8;
  case '\t':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x6bf0;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\n':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 5) = 0x4d;
    param_1[4] = -0x7ffffffa;
    param_1[0xe] = param_1[1] + 8;
  case '\v':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    param_1[6] = -0x6a5b92c3;
    param_1[7] = 0x51b3a417;
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffee;
    param_1[0xe] = param_1[1] + 8;
  case '\f':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x6c06;
    param_1[4] = -0x80000000;
    param_1[0xe] = param_1[1] + 8;
  case '\r':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 5) = 0x8343;
    param_1[4] = -0x7ffffff6;
    param_1[0xe] = param_1[1] + 8;
  case '\x0e':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7ffffff2;
    param_1[5] = -0x77fa836f;
    param_1[0xe] = param_1[1] + 8;
  case '\x0f':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 5) = 0x1e;
    param_1[4] = -0x7ffffffa;
    param_1[0xe] = param_1[1] + 8;
  case '\x10':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7ffffff2;
    param_1[5] = -0x6cb57d01;
    param_1[0xe] = param_1[1] + 8;
  case '\x11':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7ffffff6;
    *(undefined2 *)(param_1 + 5) = 0xcdea;
    param_1[0xe] = param_1[1] + 8;
  case '\x12':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = 0x52802f17;
    param_1[0xe] = param_1[1] + 8;
  case '\x13':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = 0x4f00a87f;
    param_1[0xe] = param_1[1] + 8;
  case '\x14':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = 0x36c05e26;
    param_1[0xe] = param_1[1] + 8;
  case '\x15':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = -0x48b03021;
    param_1[0xe] = param_1[1] + 8;
  case '\x16':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[4] = -0x7fffffff;
    param_1[5] = 0x3dccce9;
    param_1[0xe] = param_1[1] + 8;
  case '\x17':
    FUN_00a20120(param_1 + 4);
    FUN_00a07300(param_1 + 4);
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
    FUN_00fb7ca0(&DAT_01875f98);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875f98);
  }
}

