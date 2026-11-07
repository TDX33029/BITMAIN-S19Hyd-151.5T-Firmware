// FUN_00b37908 @ 00b37908 size=240 calls_out=3 calls_in=1
// strings: gzip header field too long

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00b37908(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char local_31;
  undefined1 local_30 [4];
  int local_2c;
  
  while( true ) {
    local_31 = '\0';
    FUN_009a4a68(local_30,param_2,&local_31,1);
    cVar1 = local_31;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(local_30[0]) {
    case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (local_2c == 0) {
      *param_1 = 0x2501;
      param_1[1] = 0;
      return;
    }
    if (local_31 == '\0') {
      *(undefined1 *)param_1 = 4;
      return;
    }
    iVar2 = param_3[2];
    if (iVar2 == 0xffff) break;
    if (iVar2 == *param_3) {
      FUN_006666a0(param_3);
    }
    *(char *)(param_3[1] + iVar2) = cVar1;
    param_3[2] = iVar2 + 1;
  }
  FUN_019a18a8(param_1,0x14,"gzip header field too long",0x1a);
  return;
}

