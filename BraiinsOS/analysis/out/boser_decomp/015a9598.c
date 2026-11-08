// FUN_015a9598 @ 015a9598 size=1840 calls_out=2 calls_in=1
// strings: cached-subtype | cached-txt | cached-ptr | cached-srv | cache-refresh-addr | unregister

undefined4 FUN_015a9598(undefined1 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 8) {
      FUN_006520b4(param_2,iVar3,8,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    *(undefined4 *)(iVar1 + iVar3) = 0x69676572;
    ((undefined4 *)(iVar1 + iVar3))[1] = 0x72657473;
    iVar3 = iVar3 + 8;
    break;
  case 1:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0xf) {
      FUN_006520b4(param_2,iVar3,0xf,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,"register-resend",0xf);
    iVar3 = iVar3 + 0xf;
    break;
  case 2:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 10) {
      FUN_006520b4(param_2,iVar3,10,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "unregister";
    goto LAB_015a975c;
  case 3:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x11) {
      FUN_006520b4(param_2,iVar3,0x11,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "unregister-resend";
    goto LAB_015a97d8;
  case 4:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 6) {
      FUN_006520b4(param_2,iVar3,6,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    *(undefined4 *)(iVar1 + iVar3) = 0x776f7262;
    *(undefined2 *)((undefined4 *)(iVar1 + iVar3) + 1) = 0x6573;
    iVar3 = iVar3 + 6;
    break;
  case 5:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x10) {
      FUN_006520b4(param_2,iVar3,0x10,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,"resolve-hostnameZ ",0x10);
    iVar3 = iVar3 + 0x10;
    break;
  case 6:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 7) {
      FUN_006520b4(param_2,iVar3,7,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    *(undefined4 *)(iVar1 + iVar3) = 0x70736572;
    *(undefined4 *)(iVar1 + iVar3 + 3) = 0x646e6f70;
    iVar3 = iVar3 + 7;
    break;
  case 7:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x11) {
      FUN_006520b4(param_2,iVar3,0x11,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "cache-refresh-ptr";
LAB_015a97d8:
    FUN_01bed4e2(iVar1 + iVar3,pcVar2,0x11);
    iVar3 = iVar3 + 0x11;
    break;
  case 8:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x15) {
      FUN_006520b4(param_2,iVar3,0x15,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,"cache-refresh-srv-txt",0x15);
    iVar3 = iVar3 + 0x15;
    break;
  case 9:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x12) {
      FUN_006520b4(param_2,iVar3,0x12,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "cache-refresh-addr";
    goto LAB_015a99f8;
  case 10:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x18) {
      FUN_006520b4(param_2,iVar3,0x18,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "known-answer-suppression";
    goto LAB_015a9990;
  case 0xb:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 10) {
      FUN_006520b4(param_2,iVar3,10,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "cached-ptr";
    goto LAB_015a975c;
  case 0xc:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 10) {
      FUN_006520b4(param_2,iVar3,10,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "cached-srv";
    goto LAB_015a975c;
  case 0xd:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0xb) {
      FUN_006520b4(param_2,iVar3,0xb,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "cached-addr";
    goto LAB_015a98f0;
  case 0xe:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 10) {
      FUN_006520b4(param_2,iVar3,10,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "cached-txt";
LAB_015a975c:
    FUN_01bed4e2(iVar1 + iVar3,pcVar2,10);
    iVar3 = iVar3 + 10;
    break;
  case 0xf:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0xb) {
      FUN_006520b4(param_2,iVar3,0xb,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "cached-nsec";
LAB_015a98f0:
    FUN_01bed4e2(iVar1 + iVar3,pcVar2,0xb);
    iVar3 = iVar3 + 0xb;
    break;
  case 0x10:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0xe) {
      FUN_006520b4(param_2,iVar3,0xe,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,"cached-subtype",0xe);
    iVar3 = iVar3 + 0xe;
    break;
  case 0x11:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x12) {
      FUN_006520b4(param_2,iVar3,0x12,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "dns-registry-probe";
    goto LAB_015a99f8;
  case 0x12:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x13) {
      FUN_006520b4(param_2,iVar3,0x13,1,1);
      iVar3 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar3,"dns-registry-active",0x13);
    iVar3 = iVar3 + 0x13;
    break;
  case 0x13:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x12) {
      FUN_006520b4(param_2,iVar3,0x12,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "dns-registry-timer";
LAB_015a99f8:
    FUN_01bed4e2(iVar1 + iVar3,pcVar2,0x12);
    iVar3 = iVar3 + 0x12;
    break;
  case 0x14:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 0x18) {
      FUN_006520b4(param_2,iVar3,0x18,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    pcVar2 = "dns-registry-name-changeServiceNameLenMaxIpCheckInterval";
LAB_015a9990:
    FUN_01bed4e2(iVar1 + iVar3,pcVar2,0x18);
    iVar3 = iVar3 + 0x18;
    break;
  case 0x15:
    iVar3 = param_2[2];
    if ((uint)(*param_2 - iVar3) < 5) {
      FUN_006520b4(param_2,iVar3,5,1,1);
      iVar3 = param_2[2];
    }
    iVar1 = param_2[1];
    *(undefined4 *)(iVar1 + iVar3) = 0x656d6974;
    *(undefined1 *)((undefined4 *)(iVar1 + iVar3) + 1) = 0x72;
    iVar3 = iVar3 + 5;
  }
  param_2[2] = iVar3;
  return 0;
}

